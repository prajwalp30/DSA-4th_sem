#include <stdio.h>

// Define a nested structure
struct Date {
    int day;
    int month;
    int year;
};

struct Person {
    char name[50];
    int age;
    struct Date birthdate;
};

int main() {
    // Create a nested structure variable
    struct Person person = {"John Doe", 25, {15, 3, 1999}};

    // Access nested structure members
    printf("Name: %s\nAge: %d\nBirthdate: %d/%d/%d\n",
           person.name, person.age,
           person.birthdate.day, person.birthdate.month, person.birthdate.year);

    return 0;
}

