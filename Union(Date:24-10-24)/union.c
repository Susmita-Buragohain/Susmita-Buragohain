#include<stdio.h>
union car {
	char name[25];
	float price;
};
main()
{
	union car s;
	printf("Name:");
	scanf("%s",s.name);
	printf("Price:");
	scanf("%f",&s.price);
	printf("%s",s.name);
	printf("%f",s.price);
}
