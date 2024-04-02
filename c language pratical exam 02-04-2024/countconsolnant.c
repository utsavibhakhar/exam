#include <stdio.h> 
int main()
{
    char s[100];  
    int i,consonant=0,vowel=0;
 
    printf("Enter  the string : ");
    gets(s);
     
    for(i=0;s[i];i++)  
    {
    	if((s[i]>=65 && s[i]<=90)|| (s[i]>=97 && s[i]<=122))
    	{
            if(s[i]=='a'|| s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O' ||s[i]=='U')
		    vowel++;
            else
             consonant++;
        }
 	}
    printf("consonants = %d\n",consonant);
}
