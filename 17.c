#include <stdio.h>

// Define a structure
struct Student {
    char name[50];
    int age;
    float marks;
};

int main() {
    // Create an array of structures
    struct Student students[3] = {{"Alice", 20, 85.5},
                                  {"Bob", 22, 76.0},
                                  {"Charlie", 21, 90.2}};

    // Access structure elements in an array
    for (int i = 0; i < 3; i++) {
        printf("Student %d\nName: %s\nAge: %d\nMarks: %.2f\n\n",
               i + 1, students[i].name, students[i].age, students[i].marks);
    }

    return 0;
}

