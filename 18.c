#include <stdio.h>

// Define an enumeration
enum Color {
    RED,
    GREEN,
    BLUE
};

// Define a structure with an enumeration
struct Car {
    char model[50];
    enum Color color;
    int year;
};

int main() {
    // Create a structure variable with an enumeration
    struct Car myCar = {"Toyota", BLUE, 2022};

    // Access structure members with an enumeration
    printf("Model: %s\nColor: %d\nYear: %d\n",
           myCar.model, myCar.color, myCar.year);

    return 0;
}

