#include <stdio.h>

// Function to calculate the sum of two numbers
int add(int a, int b) {
    return a + b;
}

int main() {
    int num1 = 10, num2 = 5;
    int result = add(num1, num2);

    printf("Sum of %d and %d is %d\n", num1, num2, result);

    return 0;
}

