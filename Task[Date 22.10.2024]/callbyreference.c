Swap two numbers using call by reference

#include<stdio.h>
main()
{
int a=10,b=20;

printf("Before swap: %d,%d\n",a,b);
swap(&a,&b);
printf("After swap :%d,%d",a,b); 
}
swap(int *a,int *b)
{
int temp=*a;
*a=*b;
*b=temp;
}
