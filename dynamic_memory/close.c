#include<stdio.h>
#include<stdlib.h>

void main() {
    //getting size of memory
    int size,i = 0;
    scanf("%d", &size);

    //allocating memory
    int *ptr;
    ptr = (int *) calloc(size, sizeof(int));

    //assigning values
    while(i < size){
        scanf("%d", &ptr[i]);
        i++;
    }

    //printing valuse
    i = 0;
    while(i < size) {
        printf("%d, ", ptr[i]);
        i++;
    }

    free(ptr);
}