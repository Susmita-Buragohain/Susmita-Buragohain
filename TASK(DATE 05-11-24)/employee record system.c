#include <stdio.h>

#define MAX_EMPLOYEES 100

// Define the structure for Employee
struct Employee {
    int id;
    char name[50];
    int age;
    float salary;
};

// Function to input employee details
void inputEmployeeDetails(struct Employee employees[], int *count) {
    int i;
    printf("Enter the number of employees: ");
    scanf("%d", count);

    for (i = 0; i < *count; i++) {
        printf("\nEnter details for Employee %d:\n", i + 1);
        printf("Employee ID: ");
        scanf("%d", &employees[i].id);

        printf("Name: ");
        scanf(" %[^\n]", employees[i].name);

        printf("Age: ");
        scanf("%d", &employees[i].age);

        printf("Salary: ");
        scanf("%f", &employees[i].salary);
    }
}

// Function to display employee details in a tabular format
void displayEmployeeDetails(struct Employee employees[], int count) {
    int i;
    printf("\n%-10s %-20s %-5s %-10s\n", "Emp ID", "Name", "Age", "Salary");
    printf("----------------------------------------------------\n");
    for (i = 0; i < count; i++) {
        printf("%-10d %-20s %-5d %-10.2f\n", employees[i].id, employees[i].name, employees[i].age, employees[i].salary);
    }
}

int main() {
    struct Employee employees[MAX_EMPLOYEES];
    int count;

    inputEmployeeDetails(employees, &count);
    displayEmployeeDetails(employees, count);

    return 0;
}
