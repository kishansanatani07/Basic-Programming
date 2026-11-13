#include <stdio.h>

int main() {
    int aadhar[5];

    // input
    int *ptr = aadhar; 
    for(int i = 0; i < 5; i++) { 
        printf("%d index : ", i);
        // scanf("%d", (ptr + i));
        scanf("%d", &aadhar[i]);
    }

    // output
    printf("\n--- Output ---\n");
    for(int i = 0; i < 5; i++) {
        // printf("%d index = %d\n", i, *(ptr + i));
        printf("%d index = %d\n", i, aadhar[i]);
    }

    return 0;
}
