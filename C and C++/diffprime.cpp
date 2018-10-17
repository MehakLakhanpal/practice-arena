#include<bits/stdc++.h>
using namespace std;
bool isprime(int N);
int nextprime(int n);
int main()
{
	int a,n,diff=2,num;
	cin>>a>>n;
	cout<<a<<" ";
		num=a+diff;
		for(int i=2;i<n;i++)
		{
			cout<<num<<" ";
			diff=nextprime(diff);
			num+=diff;
		}
		cout<<num;
	return 0;	
}
int nextprime(int n)
{
	n++;
	while(1)
	{
		if(isprime(n))
		 return n;
		n++;
	}
}
bool isprime(int N)
{
	if(N<=1)
	 return false;
	for(int i=2;i<=sqrt(N);i++)
	{
		if(N%i==0)
		 return false;
	}
	return true;
}
