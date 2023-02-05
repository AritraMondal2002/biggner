#include<stdio.h>
void main() {

    int age;
    printf("enter age: ");

    scanf("%d", &age);
    int *ptr = &age;

    printf("%p\n", ptr);
    printf("%d\n", &age);
    printf("%d\n", age);
    printf("%d\n", *ptr);
    printf("%d\n", *(&age));

}