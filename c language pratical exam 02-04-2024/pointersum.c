#include<stdio.h>
main()
{
	int n;

	printf("enter any number:");
	scanf("%d",&n);
	
	int i,sum=0,a[n];
	
	for(i=0;i<n;i++)
	{
		printf("enter elements:");
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	
	int *p;
	p=&sum;
	
	printf("sum:");
	printf("%d",*p);
	
}
