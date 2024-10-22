#include <stdio.h>

struct student{
    char name[50];
    int age;
    char grade [50];
};

int main() {
    struct student x[5];
    for (int i = 0; i < 5; i++) {
        printf("Enter details for students%d:\n", i + 1);
        printf("Enter Name: ");
        scanf("%s", x[i].name);
        printf("Enter Age: ");
        scanf("%d", &x[i].age);
        printf("Enter Grade: ");
        scanf("%s", x[i].grade);
    }
    display_student(x, 5);
}
 display_student(struct student x[], int n) {
    printf("Student Details:\n");
    for (int i = 0; i < n; i++) {
        printf("Student%d: Name: %s, Age: %d, Grade: %s\n", 
               i + 1, x[i].name,x[i].age, x[i].grade);
    }
}
