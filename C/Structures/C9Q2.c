#include <stdio.h>
#include <string.h>

struct student {
    int roll;
    float cgpa;
    char name[100];
};

int main() {
    struct student s[3];

    s[0].roll = 1664;
    s[0].cgpa = 9.2;
    strcpy(s[0].name, "shradha");

    s[1].roll = 1665;
    s[1].cgpa = 8.5;
    strcpy(s[1].name, "rahul");

    s[2].roll = 1666;
    s[2].cgpa = 9.0;
    strcpy(s[2].name, "amit");

    for(int i = 0; i < 3; i++) {
        printf("student %d name = %s\n", i + 1, s[i].name);
        printf("student %d roll no = %d\n", i + 1, s[i].roll);
        printf("student %d cgpa = %f\n\n", i + 1, s[i].cgpa);
    }

    return 0;
}
