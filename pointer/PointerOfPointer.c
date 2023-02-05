#include<stdio.h>
void main(){
    float f = 100.00;
    float *p = &f;
    float **PtP = &p;

    printf("%p\n", p);
    printf("%p\n", PtP);
    printf("%f\n", *p);
    printf("%f\n", p);
    printf("%p\n", *PtP);
    printf("%f\n", *PtP);
    printf("%f\n", **PtP);
}