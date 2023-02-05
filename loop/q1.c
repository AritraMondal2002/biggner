#include<stdio.h>
void main() {
    int n;
    scanf("%d", &n);
    for(int  i = 0; n/2 >= i; i++){
        for(int m =0; m< n/2 - i; m++){
            printf("  ");
        }
        for(int j = 0;j <= 2*i; j++){
            printf(" *");
        }
        printf("\n");
    }
    for(int i = 0; i < n/2; i++){
        for(int m = -1; m < i; m++) {
            printf("  ");
        }
        for(int j = 1; j < 2*(n/2 - i); j++){
            printf(" *");
        }
        printf("\n");
    }
}
