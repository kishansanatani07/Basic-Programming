#include <stdio.h>
int main(){
    char day; //M=monday,T=tuesday.....
    printf("enter day;\n");
    scanf("%c", &day);
    switch (day)
    {
    case 'M': printf("Monday\n");
        break;
     case 'T': printf("Tuesday\n");
        break;
         case 'W': printf("Wednesday\n");
        break;
         case 't': printf("Thursday\n");
        break;
         case'F': printf("Friday\n");
        break;
         case 'S': printf("Saturday\n");
        break;
         case 'H': printf("Sunday\n"); printf("gym jaoo\n");
         break;
         default: printf("Enter a valid day\n");
    }
    return 0;
}