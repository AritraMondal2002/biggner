#include<stdio.h>
void main(){
     char *canChange = {"hello world"};
    puts(canChange);
    canChange = "hellow";
    puts(canChange);

    char cannotCh[] = "namaste";
    puts(canChange);
    //cannotCh = "hola";
    //puts(cannotCh);

    //input line(not safe)
    char str[20];
    gets(str);
    puts(str);

    //input line(safe)
    char _str[20];
    fgets(_str,20,stdin);
    puts(_str);
}