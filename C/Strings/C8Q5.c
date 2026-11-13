#include <stdio.h>

int main() {
    char name[100];
    int length = 0;
    
    printf("Enter your name: ");
    fgets(name,100,stdin);
    
    // Count characters until the end of the string
    while (name[length] != '\0') {
        length++;
    }
    
    printf("The length of your name is: %d\n", length);
    
    return 0;
}


// #include <stdio.h>
// #include <string.h> // Required for strlen()

// int main() {
//     char name[100];
    
//     printf("Enter your name: ");
//     scanf("%s", name); // Reads a single word name
    
//     // strlen() counts characters excluding the null terminator '\0'
//     int length = strlen(name); 
    
//     printf("The length of your name is: %d\n", length);
    
//     return 0;
// }
