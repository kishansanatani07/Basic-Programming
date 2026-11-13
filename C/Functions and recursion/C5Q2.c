#include <stdio.h>
void printHello();//function declaration
void printbye();
//function definition 
void printHello(){
    printf("Hello!\n");
}
void printbye(){
    int i;
     printf("enter the input number:");
    scanf("%d",&i);
    if(i==1){
    printf("Good Bye!\n");}
    else{
        printf("Welcome!");
    }
}
int main(){
printHello(); //function call
printbye();
    return 0;
}
