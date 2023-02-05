#include<stdio.h>
void prt();

void main(){
    int i;
    printf("enter no: ");
    scanf("%d", &i);
    prt(i,0,1,0);
}

void prt(int i,int a,int b,int c){
    if(c==i){
        return;
    }
    printf("%d ", a);
    prt(i,b,a+b,c+1);
}