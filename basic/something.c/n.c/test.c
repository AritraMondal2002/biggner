#include<stdio.h>
void main() {
    int size;
    scanf("%d", &size);
    printf("%d", size);
    char s[size];
    for(int i=0; i<size; i++) {
        scanf("%c", s[i]);
    }
    
    char name[] = "codefrs";
    for(int i=0; i<size; i++) {
        printf("%c", s[i]);
    }
}
