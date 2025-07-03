#include <stdio.h>
#include <string.h>

struct Batsman {
    char name[50];
    int age;
    int runs;
    float average;
};

int main() {
    struct Batsman batsman1;

    // Assigning values to batsman1
    strcpy(batsman1.name, "Prince Sinha");
    batsman1.age = 12;
    batsman1.runs = 18426;
    batsman1.average = 44.83;

    // Printing the details of batsman1
    printf("Name: %s\n", batsman1.name);
    printf("Age: %d\n", batsman1.age);
    printf("Runs: %d\n", batsman1.runs);
    printf("Average: %.2f\n", batsman1.average);

    return 0;
}