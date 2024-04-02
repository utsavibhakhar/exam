#include<stdio.h>
main()
{
	int f,l,n,sum=0;

	printf("Enter any number:");
	scanf("%d",&n);

	for(f=n;f>=10;f/=10)

		l=n%10;
		sum=f+l;

	printf("sum of first and last digit of sum: %d",sum);

}
