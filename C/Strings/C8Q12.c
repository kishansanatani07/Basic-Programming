#include <stdio.h>
#include <string.h> // Required for strchr

int main() {
    char str[] = "HelloWorld";
    char searchChar = 'o';
    
    // strchr returns a pointer if found, or NULL if not found
    if (strchr(str, searchChar) != NULL) {
        printf("Character '%c' is present.\n", searchChar);
    } else {
        printf("Character '%c' is NOT present.\n", searchChar);
    }
    
    return 0;
}
