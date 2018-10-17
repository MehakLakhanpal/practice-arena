#include<stdio.h>
#include<string.h>
int main()
{
	char *str;
	gets(str);
	int length=strlen(str);
	for(int i=length-1;i>=0;i--)
	{
		if(str[i]==' ')
		{ 
		  cout<<"if";
			str[i]='\0';
			printf("%s ",&(str[i])+1);
		}
	}
	printf("%s",str);
	return 0;
}
