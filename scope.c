#include<stdio.h>
main()
{
	sample();
	sample();
}
sample()
{
	static int x;
	x=x+10;
	printf("%d \n",x);
}
