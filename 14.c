#include <stdio.h>

// Define a simple structure
struct Point {
    int x;
    int y;
};

int main() {
    // Create and initialize a structure variable
    struct Point p1 = {3, 7};

    // Access structure members
    printf("Coordinates: (%d, %d)\n", p1.x, p1.y);

    return 0;
}
