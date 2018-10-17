#include<bits/stdc++.h>
using namespace std;
int  multi_chk(int temp1,int temp2,int *a,int *b)
{
	if(temp1==0)
	{
		*a=0;
		*b=1;
		 return temp2;
	}
	int c,d;
	int hcf=multi_chk(temp2%temp1,temp1,&c,&d);
	*a=d-(temp2/temp1)*c;
	*b=c;
	return hcf;
}
int main()
{
	int n,count=0;
	cin>>n;
	if(n==0||n==1)
	{
		cout<<"0";
	}
	else
	{
		int a,b;
	for(int i=1;i<n;i++)
	{
		if(multi_chk(i,n,&a,&b)==1)
		 count++;
	}
	cout<<count;
   } 
	return 0;
}

