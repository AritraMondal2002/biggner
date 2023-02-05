#include<stdio.h>

int main()
{
    float n,t;
    scanf("%f", &n);
    int x = n;
    float f = 1;
    double num = n;
    int i; 
    printf("%lf", num);
    for(i = 1; i<64; i++) {
       x = x * n;
       f = f * i;
       t = x/f;
       num = num + t;
    }
    printf("%lf", num);
    return 0;
}
