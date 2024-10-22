Task 1: Define and Initialize a Structure

	•	Objective: Create a structure to represent a student, which includes the following fields: name, age, and grade. Write a program that initializes a student variable and displays the student’s information.
	•	Requirements:
	•	Define a structure named Student.
	•	Use appropriate data types for each field.
	•	Write a function to display the student’s details

CODE


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

