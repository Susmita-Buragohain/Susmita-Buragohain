//Program Name-String Length
#include<stdio.h>
#include<string.h>
main()
{
	char f_name[25];
	int x;
	printf("Enter the string:\n");
	scanf("%s",f_name);
	x=strlen(f_name);
	printf("String length is %d",x);
}
