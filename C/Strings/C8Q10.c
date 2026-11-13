#include <stdio.h>

// Function to slice a string from index n to m (inclusive)
void slice(char str[], int n, int m) {
    int i, j = 0;
    
    // Copy characters from index n to m to the beginning of the string
    for (i = n; i <= m && str[i] != '\0'; i++) {
        str[j] = str[i];
        j++;
    }
    
    str[j] = '\0'; // Properly null-terminate the sliced string
}

int main() {
    char str[] = "HelloWorld";
    int n = 3; // Starting index
    int m = 6; // Ending index
    
    printf("Original string: %s\n", str);
    
    slice(str, n, m);
    
    printf("Sliced string  : %s\n", str); // Expected output: "loWo"
    
    return 0;
}
