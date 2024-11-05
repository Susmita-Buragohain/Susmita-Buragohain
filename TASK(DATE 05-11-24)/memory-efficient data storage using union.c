#include<stdio.h>
union StudentData{
	char grade;
	int student_id;
	float cgpa;
};
main()
{
	union StudentData data;
	data.grade='A';
	printf("Stored Grade:%c\n",data.grade);
	data.student_id=98765;
	printf("Stored Student ID:%d\n",data.student_id);
	data.cgpa = 8.5;
	printf("Stored CGPA: %.2f\n",data.cgpa);
	return 0;
}
