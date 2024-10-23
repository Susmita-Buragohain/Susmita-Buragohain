//printing through pointers

#include <stdio.h>

struct stud {
    char name[25];
    float marks[5];
};

void show(struct stud *m);

int main() {
    struct stud s1;
    int i;

    printf("Enter student name: ");
    fgets(s1.name, sizeof(s1.name), stdin);

    printf("Enter 5 marks: ");
    for (i = 0; i < 5; i++) {
        scanf("%f", &s1.marks[i]);
    }

    show(&s1);
    return 0;
}

void show(struct stud *m) {
    int i;
    char *namePtr = m->name;
    float *marksPtr = m->marks;

    printf("Name: ");
    while (*namePtr != '\0' && *namePtr != '\n') {
        printf("%c", *namePtr);
        namePtr++;
    }
    printf("\n");

    printf("Marks: ");
    for (i = 0; i < 5; i++) {
        printf("%.2f ", *(marksPtr + i));
    }
    printf("\n");
}
