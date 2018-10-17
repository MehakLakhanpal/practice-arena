#include<iostream>
using namespace std;
int main()
{
	string w1,w2,w3,res;
	cin>>w1;
	cin>>w2;
	cin>>w3;
	for(int i=0;w1[i]!='\0';i++)
	{
		if(w1[i]=='a'||w1[i]=='e'||w1[i]=='i'||w1[i]=='o'||w1[i]=='u')
		  w1[i]='$';
	}
	for(int i=0;w2[i]!='\0';i++)
	{
		if((w2[i]!='a'&&w2[i]!='e')&&(w2[i]!='i'&&w2[i]!='o'))
		{
		  if(w2[i]!='u')
		   w2[i]='#';
		}
	}
	for(int i=0;w3[i]!='\0';i++)
	{
		if(w3[i]>='a'&&w3[i]<='z')
		 w3[i]=w3[i]-32;
	}
	res=w1+w2+w3;
	cout<<res;
	int a='A';
	cout<<a;
	return 0;
}
