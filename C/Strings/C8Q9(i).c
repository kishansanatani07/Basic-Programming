#include <stdio.h>
#include <string.h>

// Function to add salt to the password
void salting(char *password) {
    char salt[] = "123";
    strcat(password, salt); 
}

int main() {
    // Allocate enough space to store both the password and the salt
    char password[100]; 
    
    printf("Enter password: ");
    scanf("%s", password);
    
    salting(password);
    
    printf("New password: %s\n", password);
    
    return 0;
}


// #include <stdio.h>
// #include <string.h> // Required for strcpy and strcat

// void salting(char password[]) {
//     char salt[] = "123";
//     char newPass[200];
    
//     strcpy(newPass, password); // newPass = "test"
//     strcat(newPass, salt);     // newPass = "test" + "123";
//     puts(newPass);
// }

// int main() {
//     char password[] = "test";
//     salting(password);
//     return 0;
// }
