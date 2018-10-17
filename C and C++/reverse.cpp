#include<iostream>
using namespace std;
int main()
{
	string str;
	getline(cin,str);
	for(int i=str.length()-1;i>=0;i--)
	{
		if(str[i]==' ')
		{
			str[i]='\0';
			cout<<&(str[i])+1;
			cout<<" ";
		}
	}
	int i=0;
	while(str[i]!='\0')
	 cout<<str[i++];
	return 0;
}
