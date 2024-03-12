#include <stdio.h>

// Define a structure
struct Rectangle {
    int length;
    int width;
};

// Function to calculate the area of a rectangle
int calculateArea(struct Rectangle r) {
    return r.length * r.width;
}

int main() {
    // Create a structure variable
    struct Rectangle rect = {5, 8};

    // Call a function with the structure as an argument
    int area = calculateArea(rect);

    printf("Area of the rectangle: %d\n", area);

    return 0;
}
