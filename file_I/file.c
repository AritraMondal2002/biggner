#include<stdio.h>
#include<string.h>
void print();

int main() {
    FILE *f;
    f = fopen("tutorial.txt", "r");
    print(f);
    fclose(f);
    return 0;
}

void print(FILE *f) {
    char ch;
    while(ch != EOF) {          // EOF => end of file
        ch = fgetc(f);
        putchar(ch);
    }
}