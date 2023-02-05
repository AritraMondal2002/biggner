#include<stdio.h>

void main() {
    char str[20];
    fgets(str,20,stdin);

    char c;
    scanf("%c", &c);

    int i;
    for(i = 0; i < 20; i++) {
        if(c == str[i]) {
            printf("char is present");
            return;
        }
    }
    printf("char is not present");
}