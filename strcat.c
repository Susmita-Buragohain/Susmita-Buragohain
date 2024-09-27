//Program Name-String Concatenation
#include<stdio.h>
#include<string.h>
main()
{
	char fname[25],cname[25];
	printf("Enter first string:\n");
	scanf("%s",fname);
	printf("Enter second string:\n");
	scanf("%s",cname);
	strcat(fname,cname);
	printf("%s\n",fname);
}
