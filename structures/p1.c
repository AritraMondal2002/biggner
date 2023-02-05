#include<stdio.h>
#include<string.h>

/*structure:
    1. saves us from creating too many variables.
    2. data management and organisation.
*/
typedef struct student {
    int roll;
    char name[20];
    float cgpa;
    
}stud;
int main()
{
    printf("\nhello\n");
    struct student s1;
    s1.roll = 41;
    strcpy(s1.name, "Brijendra Singh");
    s1.cgpa = 9.8;
    //OR
    stud s2 = {24,"aritra mondal",5.4};

    printf("\nroll no is: %d\n", s1.roll);
    printf("name is: %s\n", s1.name);
    printf("cgpa is: %f\n", s1.cgpa);

    printf("\nroll no: %d\n", s2.roll);
    printf("name is: %s\n", s2.name);
    printf("cgpa is: %f\n\n", s2.cgpa);

    struct student *ptr = &s2;
    printf("roll is: %d\n", (*ptr).roll);   // aam jindagi
    printf("roll is: %d\n", ptr->roll);     // mentos jindagi
    return 0;
}
