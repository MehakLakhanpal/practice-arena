#include<bits/stdc++.h>
using namespace std;
bool isprime(int N);
int nextprime(int n);
int main()
{
	int n;
	cin>>n;
	int f1=0,f2=1,f3,res,pm=2;
	for(int i=1;i<=n;i++)
	{
		if(i%2==1)
		{
		   f3=f2+f1;
		   res=f2;
		   f1=f2;
		   f2=f3;
		}
		else
		{
			if(i==2)
			 res=2;
			else
			{
			  res=nextprime(pm);
			  pm=res;
		    }
		}
		cout<<res<<" ";
	}
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
