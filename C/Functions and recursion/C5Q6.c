#include <stdio.h>
#include <math.h> // Required for the pow() function

int main() {
    int n ;
    printf("enter the value of n\n");
    scanf("%d",&n);
    printf("%0.3f\n", pow(n, 2));// printf("%d\n", (int)pow(n, 2));
    return 0;
}
