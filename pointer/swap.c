#include<stdio.h>

void swap();
void _swap();

void main(){
    int x = 3;int b = 4;
    printf("int x = %d, int b = %d\n", x, b);
    swap(x,b);                               //swap by value
    printf("int x = %d, int b = %d\n", x, b);
    _swap(&x,&b);                               //swap by referance (to return multipal values).
    printf("int x = %d, int b = %d\n", x, b);
}

void swap(int a, int b){
    int t = a;
    a = b;
    b = t;
    printf("int x = %d, int b = %d\n", a,b);
}

void _swap(int *a,int *b){
    int t = *a;
    *a = *b;
    *b = t;
    printf("int x = %d, int b = %d\n", *a, *b);
}