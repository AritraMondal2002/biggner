#include<stdio.h>
int rwv();

int main(){
    char c;
    scanf("%c", &c);
    int i = c;
    if(i>64 && i<117){
        printf("true");
    }
    else{
        printf("false");
    }
    return 0;
}

int rev(int n){
    int temp = (n%10)*100;
    n /= 10;
    temp = (n%10)*10;
    n /= 10;
    return temp + n;
}