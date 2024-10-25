// To find area and perimeter of a circle for the given radius by calling two functions
#include <stdio.h>
float area(float radius) {
    return 3.14 * radius * radius;
}

float perimeter(float radius) {
    return 2 * 3.14 * radius;
}

int main() {
    float r; 
    printf("Enter the radius of the circle: ");
    scanf("%f", &r);
    printf("Area of the circle: %.2f\n", area(r));
    printf("Perimeter of the circle: %.2f\n", perimeter(r));
    return 0;
}
