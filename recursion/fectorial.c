#include<stdio.h>
int f();
void main(){
    int n;
    printf("enter n: ");
    scanf("%d", &n);
    if(n<0){printf("invalid syntax");return;}
    printf("%d\n", f(n));
}
int f(int n){
    if(n==0){return 1;}
    return n*(f(n-1));
}