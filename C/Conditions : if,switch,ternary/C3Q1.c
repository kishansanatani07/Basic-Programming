#include <stdio.h>
int main(){
    int age;
    printf("enter the age of the person: \n");
    scanf("%d", &age);
    if(age>=18 && age<100) {
        printf("person is adult \n"); printf("he cant vote\n");
    }
    else if(age>=100){printf("Person might have been died till now \n");}
    else if(age<=5){printf("he is an infant and should be sent his house back \n");

    }
    else{
        printf("he is not an adult \n");printf("person can not vote \n");
    }
    return 0;
}
