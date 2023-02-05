#include<stdio.h>
void main(){
    int a,b;
    FILE *f;
    f = fopen("num.txt", "r");
    fscanf(f, "%d", &b);
    fscanf(f, "%d", &a);
    fclose(f);
    f = fopen("num.txt", "w");
    fprintf(f, "%d ", (a + b));
    fprintf(f, "%d ", (a + b));
    fclose(f);
}