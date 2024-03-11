#include <stdio.h>

// Function to find the sum of elements in an array
int arraySum(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    printf("Sum of array elements: %d\n", arraySum(numbers, size));

    return 0;
}

