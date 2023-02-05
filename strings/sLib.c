#include<stdio.h>
#include<string.h>

void main(){
    char str[50]= "find ist length";
    puts(str);

    //length
    int l = strlen(str);
    printf("%d\n",l);

    //concatinate or append
    strcat(str, ", or die.");
    puts(str);

    //copy
    char newStr[20];
    strcpy(newStr, str);
    puts(newStr);
}