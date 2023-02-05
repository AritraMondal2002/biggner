#include<stdio.h>
void main(){int r,i,j;printf("enter redius: ");scanf("%d",&r);for(i=0;i<=2*r;i++){for(j=0;
j<=2*r;j++){if(i*i+j*j-2*(i+j)*r+r*r<=0){printf(" *");}else{printf("  ");}}printf("\n");}}