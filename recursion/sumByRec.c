#include<stdio.h>
int sum();
int sum(int n){
    if(n==1){
        return 1;
    }
    return n + sum(n-1);
}
void main(){
    int n;
    printf("enter no: ");
    scanf("%d", &n);
    int s = sum(n);
    printf("%d", s);
}
