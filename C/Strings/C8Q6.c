#include <stdio.h>
#include <string.h> // Required for strcpy()

int main() {
    char oldStr[] = "oldStr";
    char newStr[] = "newStr";
    
    strcpy(newStr, oldStr);
    
    puts(newStr);
    
    return 0;
}
