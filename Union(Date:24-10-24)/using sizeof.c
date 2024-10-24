#include <stdio.h>

union Data {
    char name[50];
    int age;
    char grade;
};

int main() {
    union Data info;

    // Input student's name
    printf("Enter student's name: ");
    scanf("%49s", info.name);  // Use %49s to prevent buffer overflow

    // Input student's age
    printf("Enter student's age: ");
    scanf("%d", &info.age);

    // Input student's grade
    printf("Enter student's grade: ");
    scanf(" %c", &info.grade);  // Notice the space before %c to handle newline

    // Calculate and display the size of the union
    int unionSize = sizeof(union Data);
    printf("Size of the union is: %d bytes\n", unionSize);

    return 0;
}
