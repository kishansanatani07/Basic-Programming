#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    int n;
    
    printf("enter n : ");
    scanf("%d", &n);

    // 1. Allocate memory for 'n' elements and initialize them to 0
    ptr = (int *) calloc(n, sizeof(int));

    // 2. Print the first allocated block values (Will output all 0s)
    for(int i = 0; i < n; i++) {
        printf("%d\n", ptr[i]);
    }

    // 3. Free the first memory allocation block
    free(ptr);

    // 4. Re-use the pointer to allocate a brand new block of 2 elements
    ptr = (int *) calloc(2, sizeof(int));
    
    // 5. Print the second allocated block values (Will output two 0s)
    for(int i = 0; i < 2; i++) {
        printf("%d\n", ptr[i]);
    }

    // Best practice: Free the second allocation before exiting main
    free(ptr);

    return 0;
}
