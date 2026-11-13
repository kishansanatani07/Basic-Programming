#include <stdio.h>
#include <string.h>

struct student {
    int roll;
    float cgpa;
    char name[100];
};

// int main() {
//     struct student ece[100];
//     ece[0].roll = 1664;
//     ece[0].cgpa = 9.2;
//     strcpy(ece[0].name, "shradha");


//     printf("name = %s\n", ece[0].name);
//     printf("roll = %d\n", ece[0].roll);
//     printf("cgpa = %0.2f\n", ece[0].cgpa);

//     return 0;
// }


    int main() {
    struct student s1={1664,9.2,"shradha"};
    printf("name = %s\n", s1.name);
    printf("roll = %d\n", s1.roll);
    printf("cgpa = %0.2f\n", s1.cgpa);
    struct student *ptr=&s1;
    printf("name = %s\n", (*ptr).name);
    printf("roll = %d\n", (*ptr).roll);
    printf("cgpa = %0.2f\n", (*ptr).cgpa);//(*ptr).cgpa==ptr->cgpa
    printf("cgpa = %0.2f\n", (*ptr).cgpa==ptr->cgpa);
    return 0;
}