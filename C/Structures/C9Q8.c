#include <stdio.h>

struct complex {
    int real;
    int img;
};

int main() {
    struct complex c1 = {5, 8};
    struct complex *ptr = &c1;

    printf("real part = %d\n", ptr->real);
    printf("img part = %d\n", ptr->img);
    
    printf("Complex number = %d + %di\n", ptr->real, ptr->img);

    return 0;
}
