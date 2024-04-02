#include<stdio.h>
#include<string.h>

struct mobile
{
	char company_name[20];
	char color[20];
	char model[20];
	int price;
};

int main()
{
	struct mobile emp[100];
	int i,n;
	
	printf("Enter size:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{	
		printf("Enter comany name:");
		scanf("%s",&emp[i].company_name);
		printf("Enter color:");
		scanf("%s",emp[i].color);
		printf("Enter model:");
		scanf("%s",&emp[i].model);
		printf("Enter price:");
		scanf("%d",&emp[i].price);
	}
	for(i=0;i<n;i++)
	{
		printf("\ncompany name :");
		puts(emp[i].company_name);
		printf("\ncolor:");
		puts(emp[i].color);
		printf("\nmodel :");
		puts(emp[i].model);
		printf("\nprice:%d",emp[i].price);
	}
}

