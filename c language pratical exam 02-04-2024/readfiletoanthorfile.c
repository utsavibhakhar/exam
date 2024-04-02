#include<stdio.h>
main()
{
	FILE *dog;
	FILE *cat;
	char n;
	
	dog=fopen("dog.txt","r");
	cat=fopen("cat.txt","w");
	
	if(dog==NULL && cat==NULL)
	{
		printf("dont create");
	}
	else
	{
		printf("file created");
		n=fgetc(dog);
		
		while(n!=EOF)
		{
			fputc(n,cat);
			n=fgetc(dog);
		}
	}
}
