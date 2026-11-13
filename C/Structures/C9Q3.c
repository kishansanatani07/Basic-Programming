#include <stdio.h>

struct student {
    int roll;
    float cgpa;
    char name[100];
};

int main() {
    struct student s[3];

    for(int i = 0; i < 3; i++) {
        printf("Enter the name of %d student\n",i+1);
        scanf("%s",&s[i].name);
        printf("Enter the roll no of %s\n",s[i].name);
        scanf("%d", &s[i].roll);
        printf("Enter the cgpa of %s\n",s[i].name);
        scanf("%f", &s[i].cgpa);
    
    }

    for(int i = 0; i < 3; i++) {
        printf("student %d name = %s\n", i + 1, s[i].name);
        printf("student %d roll no = %d\n", i + 1, s[i].roll);
        printf("student %d cgpa = %f\n\n", i + 1, s[i].cgpa);
    }

    return 0;
}
