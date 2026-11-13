#include <stdio.h>
int main(){
    int age,_age;
    int *ptr = &age;
    _age=*ptr;
    printf("enter the age\n");
    scanf("%d",&age);
    printf("%d\n",*ptr);
    printf("%d\n",&ptr);
    printf("%d\n",&age);
    printf("%d\n",*&age);
    printf("%d\n",&_age);
    return 0;
}
