/*#include <stdio.h>
 void printarray(char *ptr);
int main() {
    // Create a string containing the alphabet
    char alphabet[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    
    // Create a pointer targeting the first letter ('a')
    char *ptr = alphabet;

    printf("The alphabet using a pointer:\n");

    // // Loop until the pointer hits the hidden null-terminator '\0' at the end of the string
    // while (*ptr != '\0') {
    //     printf("%c \n", *ptr); // Print the character at the current address
    //     ptr++;               // Move the pointer forward to the next letter
    //
    
    // printf("\n");
    printarray(ptr);
    return 0;
    }
void printarray(char *ptr) {
    for (int i = 0; i <= 25; i++) {
        printf("%c \n", *ptr); 
        ptr++;
    }
}
*/

#include<stdio.h>
void printa_z(char *a,char *z);
int main(){
    char a='a', z='z';
printf("alphabets from a-z are\n");
printa_z(&a,&z);
return 0;
}
void printa_z(char *a,char *z){
for(char ch=*a;ch<=*z;ch++){
    printf("%c\n",ch);
}
}

// #include <stdio.h>

// void print_range(char start, char end) {
//     for (char ch = start; ch <= end; ch++) {
//         printf("%c\n", ch);
//     }
// }

// int main() {
//     printf("Alphabets from a-z are:\n");
//     print_range('a', 'z');
//     return 0;
// }
