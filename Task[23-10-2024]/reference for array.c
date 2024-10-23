//passing the reference for array

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
    printf("Name: %s", m->name);
    printf("Marks: ");
    for (i = 0; i < 5; i++) {
        printf("%.2f ", m->marks[i]);
    }
    printf("\n");
}
