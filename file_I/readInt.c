#include<stdio.h>
void main() {
    int n;
    FILE *f;
    f = fopen("int.txt", "rw");

    for(int i = 0; i < 5; i++){
        fscanf(f, "%d", &n);
        printf("%d\n", n);
    }
    fclose(f);

    f = fopen("int.txt", "w");
    scanf("%d", &n);
    for(int i = 1; i <= n; i = i + 2){
        fprintf(f, "%d\n", i);
    }
    fclose(f);
}
