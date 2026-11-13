#include <stdio.h>

// Custom function to append salt at the end
void customSalting(char *password) {
    char salt[] = "123";
    int i = 0;
    int j = 0;
    
    // 1. Find the end of the password string (the '\0' position)
    while (password[i] != '\0') {
        i++;
    }
    
    // 2. Copy the salt characters starting from that position
    while (salt[j] != '\0') {
        password[i] = salt[j];
        i++;
        j++;
    }
    
    // 3. Terminate the newly formed string
    password[i] = '\0';
}

int main() {
    char password[100];
    
    printf("Enter password: ");
    scanf("%s", password);
    
    customSalting(password);
    
    printf("New password: %s\n", password);
    
    return 0;
}
