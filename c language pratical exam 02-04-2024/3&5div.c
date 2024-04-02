#include<stdio.h>
void div(int i)
{
	if(i%3==0 && i%5==0)
	{
		printf("3 & 5 divisiable");
	}
	else
	{
		printf("3 & 5 not divisiable");
	}
}
void main()
{
	int i;
	printf("enter any number:");
	scanf("%d",&i);
	div(i);
}
