
#include <stdio.h>

int main(void) {
    // Create variables
    int age = 16;
    float gpa = 3.41;
    char initial = 'S';
    char name[] = "Samrat";

    // Display their original values
    printf("Name: %s\n", name);
    printf("Initial: %c\n", initial);
    printf("Age: %d\n", age);
    printf("GPA: %.2f\n", gpa);

    // Change some values
    age = 17;
    gpa = 3.75;
    initial = 'G';

    // Display their new values
    printf("\nAfter changing values:\n");
    printf("Initial: %c\n", initial);
    printf("Age: %d\n", age);
    printf("GPA: %.2f\n", gpa);

    return 0;
}
