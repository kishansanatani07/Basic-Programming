#include <stdio.h>

struct vector {
    int x;
    int y;
};

struct vector sum(struct vector v1, struct vector v2) {
    struct vector result;
    result.x = v1.x + v2.x;
    result.y = v1.y + v2.y;
    return result;
}

int main() {
    struct vector v1 = {5, 10};
    struct vector v2 = {3, 4};
    struct vector total={0};

    total = sum(v1, v2);

    printf("Sum vector: x = %d, y = %d\n", total.x, total.y);

    return 0;
}


// #include <stdio.h>

// struct vector {
//     int x;
//     int y;
// };

// void calcSum(struct vector v1, struct vector v2, struct vector sum);

// int main() {
//     struct vector v1 = {5, 10};
//     struct vector v2 = {3, 7};
//     struct vector sum = {0};
//     return 0;
// }

// void calcSum(struct vector v1, struct vector v2, struct vector sum) {
//     sum.x = v1.x + v2.x;
//     sum.y = v1.y + v2.y;

//     printf("sum of x is : %d\n", sum.x);
//     printf("sum of y is : %d\n", sum.y);
// }
