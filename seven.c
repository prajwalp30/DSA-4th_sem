#include <stdio.h>

// Function to calculate the square of a number
int square(int num) {
    return num * num;
}

int main() {
    int x;
    scanf("%d",&x);
    printf("Square of %d is %d\n", x, square(x));

    return 0;
}

