//Program Name-String Compare
#include<stdio.h>
#include<string.h>
main()
{
	char fname[25],cname[25];
	int x;
	printf("Enter first string:\n");
	scanf("%s",fname);
	printf("Enter second string:\n");
	scanf("%s",cname);
	x=strcmp(fname,cname);
	if(x==0)
	printf("Strings are same");
	else
	printf("Strings are not same");
}
