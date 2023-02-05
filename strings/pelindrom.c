#include<stdio.h>
#include<string.h>
void main(){
    char s[20];
    char temp;
    fgets(s,20,stdin);
    int l = strlen(s)-2;
    for(int i=0; 2*i < l; i++) {
        if(s[i]!=s[l-i]){
            printf("it is not a pelindrome.");
            return;
        }
    }
    printf("it is a pelindrome.");
}