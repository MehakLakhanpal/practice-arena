#include<iostream>
#include<cstring>
using namespace std;
char alpha[]=" abcdefghijklmnopqrstuvwxyz";
void allpossible(char *number,int index,int n)
{
	static char s[50]="";
	static int i=0;
	if(index==n)
	{
		s[i]='\0';
		cout<<s<<endl;
		return;
	}
	int num;
	num=number[index]-'0';
	if(num>0)
	{
		s[i++]=alpha[num];
		allpossible(number,index+1,n);
		i--;
		if(n-index-1)
		{
			num=(number[index]-'0')*10+number[index+1]-'0';
			if(num<27)
			{
				s[i++]=alpha[num];
				allpossible(number,index+2,n);
				i--;
			}
		}
	}
}
int main()
{
	char number[50];
	cin>>number;
	allpossible(number,0,strlen(number));
	return 0;
}
