#include <stdio.h>

struct Student {
    char name[50];
    int age;
    float gpa;
};

int main() {
    struct Student student;

    // Input student details
    printf("Enter name: ");
    fgets(student.name, sizeof(student.name), stdin);

    printf("Enter age: ");
    scanf("%d", &student.age);

    printf("Enter GPA: ");
    scanf("%f", &student.gpa);

    // Display student details
    printf("\nStudent Details:\n");
    printf("Name: %s", student.name);
    printf("Age: %d\n", student.age);
    printf("GPA: %.2f\n", student.gpa);

    return 0;
}