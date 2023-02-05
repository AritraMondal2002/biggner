#include<stdio.h>
void main() {
    int flag;
    int n;
    scanf("%d", &n);
    for(int i = 2; i < n; i++) {
        flag = 0;
        for(int j = 2; j*j <= i; j++) {
            if (i % j == 0){
                flag = 1;
                break;
            }
        }if(flag == 0){
            printf("%d\n", i);
        }
    }
}