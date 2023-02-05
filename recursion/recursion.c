#include<stdio.h>
void prt();     // decleration/prototype

void main(){
    int f;
    int k = 1;
    printf("enter no: ");
    scanf("%d", &f);
    prt(f,k);      //calling the function
}

    // function
void prt(int f,int k){
    if(k==11){return;}  //base condition

    printf("%d \n", (f*k));
    prt(f,k+1);
}