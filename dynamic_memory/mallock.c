#include<stdio.h>
#include<stdlib.h>      //memory is allocated during runtime insted of compile-time in arrays
int main()
{
    int *ptr;       //malloc returns a void pointer for that memory.
    ptr = (int*) malloc(5 * sizeof(int));   //(int*) -> void pointer typecasted to int pointer
    ptr[0] = 1;     // 5 times of size of int (i.e. 5 * 4 = 20 Byts)
    ptr[1] = 2;
    ptr[2] = 3;
    ptr[3] = 4;
    ptr[4] = 5;

    for(int i = 0; i < 5; i++) {
        printf("%d ", ptr[i]);
    }

    printf("\n");

    ptr = (int*) calloc(5, sizeof(int));    // 5 continuous (int) location initiated whith 0;
    ptr[0] = 1;
    ptr[1] = 2;
    ptr[2] = 3;
    ptr[3] = 4;
    ptr[4] = 5;

    for(int i = 0; i < 5; i++) {
        printf("%d ", ptr[i]);
    }

    realloc(ptr, 6);

    ptr[0] = 6;
    ptr[1] = 5;
    ptr[2] = 4;
    ptr[3] = 3;
    ptr[4] = 2;
    ptr[5] = 1;

    printf("\n");
    for(int i = 0; i < 6; i++) {
        printf("%d, ", ptr[i]);
    }

    free(ptr);

    return 0;
}
