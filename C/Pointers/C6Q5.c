#include <stdio.h>
void swap(int *a,int *b);
void swap_by_value(int a, int b);
int main() {
int a=1 , b=3;
printf("Before function call: a = %d, b = %d\n", a, b);

    // Sending copies of 1 and 3
    swap_by_value(a, b); 

    // Look at the original variables back in main
    printf("After function call in main: a = %d, b = %d\n", a, b);
printf("=reference=\n");
swap(&a,&b);
printf("a is:%d\n",a);
printf("b is:%d\n",b);
    return 0;
}
//call by reference
void swap(int *a ,int *b){
    int a1=*b;
    *b=*a;
    *a=a1;
}
// call by value
void swap_by_value(int a, int b) {
    int temp = a;
    a = b;
    b = temp;

    // Inside the function, the copies ARE swapped successfully!
    printf("Inside function: a = %d, b = %d\n", a, b);
}