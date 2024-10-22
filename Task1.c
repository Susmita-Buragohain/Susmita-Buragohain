#include<stdio.h>
struct student 
{
char name[25];
int age;
char grade[25];

};
main()
{
struct student x;
printf("Student Details:\n");
printf("Enter student name:\n");
scanf("%s",x.name);
printf("Enter student age:\n");
scanf("%d",&x.age);
printf("Enter student grade:\n");
scanf("%s",x.grade);
display(x);
}
display(struct student x)
{
printf("Student name:%s\n",x.name);
printf("Student age:%d\n",x.age);
printf("Student grade:%s\n",x.grade);

}
