// #include<stdio.h>
// void printstring(char *ch);
// int main(){
//     char firstname[]="Kishan";
//     char lastname[]="Gupta";
//     printstring(firstname);
//     printstring(lastname);
//     return 0;
// }
// void printstring(char *ch){
//     for(char i=0;ch[i]!='\0';i++){
//         printf("%c",ch[i]);  
//     }
//     printf("\t");
// }



#include<stdio.h>
int main(){
    char firstname[]="Kishan";
    char lastname[]="Gupta";
    for(char i=0;firstname[i]!='\0';i++){
     printf("%c",firstname[i]);
    }
    printf("\t");
    for(char i=0;lastname[i]!='\0';i++){
     printf("%c",lastname[i]);
    }
    printf("\t");
     return 0;
}