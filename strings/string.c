#include <stdio.h>
void main(){
    char name[20] = "aritra mondal";
    char name2[20] = {'b','r','i','j','e','n','d','r','a','\0'};

    printf("%s\n%s\n", name,name2);

    scanf("%s",name);
    int i = 0;
    for(; name[i] != '\0'; i++){
        printf("%c",name[i]);
    }printf("\n");

}