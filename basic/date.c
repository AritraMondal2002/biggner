#include<stdio.h>

void main(){
    int d,m,y;
    printf("enter date: ");
    scanf("%d %d %d", &d,&m,&y);

    char day[7][10] = {"sunday","monday","tuesday","wednesday","thursday","friday","saturday"};
    int mc[]={0,3,3,6,1,4,6,2,4,0,3,5};

    if(y%4 == 0 && m<3){
        printf("%s", day[(y + d + mc[m-1] + y/4 - 3)%7]);
    } 
    else{
        printf("%s", day[(y + d + mc[m-1] + y/4 - 2)%7]);
    }
}