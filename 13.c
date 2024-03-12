#include <stdio.h>

// Function to add two numbers
int add(int a, int b) {
    return a + b;
}

// Function to subtract two numbers
int subtract(int a, int b) {
    return a - b;
}

int main() {
    // Define a function pointer and use it to call different functions
    int (*operation)(int, int);

    operation = add;
    printf("Result of addition: %d\n", operation(5, 3));

    operation = subtract;
    printf("Result of subtraction: %d\n", operation(5, 3));

    return 0;
}
