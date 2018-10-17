#include<iostream>
using namespace std;
int main()
{
	string str1[]={"one","two","three","four","five","six","seven"};
	string str2[]={"one","four","seven"};
	int i=0,j=0;
	int n=sizeof(str1)/sizeof(str1[0]);
	while(j<n)
	{
			if(str2[i]==str1[j])
			{
			  i++;
			}
			j++;
	}
	if(i==3)
	 cout<<"True";
	else
	 cout<<"False";
}
