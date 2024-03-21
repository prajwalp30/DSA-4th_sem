#include <stdio.h>

void generateNumbers(FILE *file_pointer) {
    for (int i = 1; i <= 100; i++) {
        fprintf(file_pointer, "%d \n", i);
    }
}

int main() {
    FILE *file_pointer;
    file_pointer = fopen("example.txt", "w");

    if (file_pointer == NULL) {
        printf("Error opening file!\n");
        return 1; // return a non-zero value to indicate failure
    }

    generateNumbers(file_pointer);

    fclose(file_pointer);
    printf("File created and content written successfully.\n");

    return 0;
}
