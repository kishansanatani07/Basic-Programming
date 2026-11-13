#include <stdio.h>

float areaSquare(float side);
float areaCircle(float radius);
float areaRectangle(float length, float breadth);

int main() {
    int choice;

    printf("=== Area Calculator ===\n");
    printf("1. Square\n");
    printf("2. Circle\n");
    printf("3. Rectangle\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    if (choice == 1) {
        float side;
        printf("Enter the side length of the square: ");
        scanf("%f", &side);
        printf("Area of the square: %.2f\n", areaSquare(side));
    } 
    else if (choice == 2) {
        float radius;
        printf("Enter the radius of the circle: ");
        scanf("%f", &radius);
        printf("Area of the circle: %.2f\n", areaCircle(radius));
    } 
    else if (choice == 3) {
        float length, breadth;
        printf("Enter length of the rectangle: ");
        scanf("%f", &length);
        printf("Enter breadth of the rectangle: ");
        scanf("%f", &breadth);
        printf("Area of the rectangle: %.2f\n", areaRectangle(length, breadth));
    } 
    else {
        printf("Invalid choice! Please restart and enter a number between 1 and 3.\n");
    }

    return 0;
}

float areaSquare(float side) {
    return side * side;
}

float areaCircle(float radius) {
    return 3.14159 * radius * radius;
}

float areaRectangle(float length, float breadth) {
    return length * breadth;
}
