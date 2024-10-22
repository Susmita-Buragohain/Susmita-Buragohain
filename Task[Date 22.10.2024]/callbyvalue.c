Swap two numbers using call by value

#include<stdio.h>
main()
{
int x=4,y=7;

printf("Before swap: %d,%d\n",x,y);
swap(x,y);
printf("After swap :%d,%d",x,y); 
}
swap(int a,int b)
{
int temp=a;
a=b;
b=temp;
}
