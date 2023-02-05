#include<stdio.h>
void func();
void main(){
    int a[5];
    printf("enter numbers: ");
    scanf("%d %d", &a[0], &a[1]);
    func(&a);
    printf("sum is: %d\nmultiple is: %d\navrage is: %d\n", a[2],a[3],a[4]);
}
void func(int *a){
    a[2] = a[0]+a[1];
    a[3] = (a[0])*(a[1]);
    a[4] = a[0] + (a[1]-a[0])/2;
}