#include <stdio.h>

// Define a union
union Data {
    int i;
    float f;
    char str[20];
};

int main() {
    // Create a union variable
    union Data data;

    // Assign values to different members of the union
    data.i = 10;
    printf("Value of integer: %d\n", data.i);

    data.f = 3.14;
    printf("Value of float: %.2f\n", data.f);

    strcpy(data.str, "Hello, Union!");
    printf("Value of string: %s\n", data.str);

    return 0;
}

