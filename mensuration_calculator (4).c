
#include <stdio.h>
#define PI 3.14159

void area_circle() {
    float radius;
    printf("Enter radius of circle: ");
    scanf("%f", &radius);
    printf("Area of Circle: %.2f\n", PI * radius * radius);
    printf("Circumference of Circle: %.2f\n", 2 * PI * radius);
}

void area_rectangle() {
    float length, breadth;
    printf("Enter length and breadth of rectangle: ");
    scanf("%f %f", &length, &breadth);
    printf("Area of Rectangle: %.2f\n", length * breadth);
    printf("Perimeter of Rectangle: %.2f\n", 2 * (length + breadth));
}

void area_triangle() {
    float base, height, side1, side2, side3;
    printf("Enter base and height of triangle: ");
    scanf("%f %f", &base, &height);
    printf("Enter all three sides of triangle: ");
    scanf("%f %f %f", &side1, &side2, &side3);
    printf("Area of Triangle: %.2f\n", 0.5 * base * height);
    printf("Perimeter of Triangle: %.2f\n", side1 + side2 + side3);
}

int main() {
    int choice;
    do {
        printf("\n--- Mensuration Calculator ---\n");
        printf("1. Circle\n");
        printf("2. Rectangle\n");
        printf("3. Triangle\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: area_circle(); break;
            case 2: area_rectangle(); break;
            case 3: area_triangle(); break;
            case 4: printf("Exiting program.\n"); break;
            default: printf("Invalid choice. Please try again.\n");
        }
    } while(choice != 4);

    return 0;
}
