//passing the referene for single variable

#include <stdio.h>

struct stud {
    char name[25];
    float marks;
};


void show(struct stud *m);

int main() {
    struct stud s1 = {"Robin", 56.0};
    show(&s1); 
    return 0;
}

void show(struct stud *m) {
    printf("Name: %s\n", m->name);   
    printf("Marks: %.2f\n", m->marks); 
}
