#include<stdio.h>
void sq();
void _sq();
void main(){
    int x = 5;

    sq(x);
    printf("x: %d\n", x);

    _sq(&x);
    printf("x: %d\n", x);
}

void sq(int y){
    y *= y;
    printf("squar is: %d\n", y);
}

void _sq(int *z){
    *z = (*z) * (*z);
    printf("squuar is: %d\n", *z);
}