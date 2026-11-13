#include <stdio.h>
#include <string.h> // Required for strcmp()

int main() {
    char firstStr[] = "Apple";
    char secStr[] = "Banana";
    
    printf("%d\n", strcmp(firstStr, secStr));
    printf("%d", strcmp(secStr, firstStr));
    return 0;
}
