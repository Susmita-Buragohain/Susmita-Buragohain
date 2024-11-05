#include<stdio.h>

struct Student{
int rollNumber;
char name[50];
float marks[3];
};

int main(){
	struct Student student;
	float total=0.0,average;
	int i;
	
	printf("Enter roll number:");
	scanf("%d",&student.rollNumber);
	
	printf("Enter name:");
	scanf(" %[^\n]",student.name);
	
	printf("Enter marks in 3 subjects:\n");
	for(i=0; i<3; i++){
		printf("Subject %d:",i+1);
		if(scanf("%f", &student.marks[i]) != 1){
			printf("Invalid Input. Please enter a number.\n");
			i--;
			while(getchar()!='\n');
			continue;
		}
		total += student.marks[i];
	}
	average=total/3;
	printf("\nStudent Details:\n");
	printf("Roll Number: %d\n",student.rollNumber);
	printf("Name: %s\n",student.name);
	printf("Total Marks: %.2f\n",total);
	printf("Average Marks:%.2f\n",average);
	
	return 0;
}
