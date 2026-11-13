// #include <stdio.h>

// int sum(int a, int b); // Function declaration

// int main() {
//     int a, b;
//     printf("enter first number : ");
//     scanf("%d", &a);
//     printf("enter second number : ");
//     scanf("%d", &b);
//     int result = sum(a, b);
//     printf("The sum is : %d\n", result);
    
//     return 0;
// }

// // Function definition
// int sum(int a, int b) {
//     return a + b;
// }


#include <stdio.h>

// Function declaration (prototype)
void printTable(int n);

int main() {
    int n;
    
    printf("enter a number : ");
    scanf("%d", &n);
    
    // argument/actual parameter
    printTable(n); 
    
    return 0;
}
void printTable(int n) {//formal parameter/parameter
    for(int i = 1; i <= 10; i++) {
        printf("%d\n",i*n); 
    }
}

