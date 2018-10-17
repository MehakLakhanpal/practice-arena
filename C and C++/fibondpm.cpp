#include<bits/stdc++.h>
using namespace std;
bool isPrime(int num)
{
	int flag=0;
	for(int i=2;i<=sqrt(num);i++)
	{
		if(num%i==0)
		 flag=1;	 
	}
	if(flag==0)
	 return true;
	else
	 return false;
}
int main()
{
	int num=2,count=0,f3,f1=0,f2=1,n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		if(i%2==1)
		{
			f3=f2+f1;
			count++;
			if(count==n)
			{
			 cout<<f2<<" ";
			 return 0;
		    }
			f1=f2;
			f2=f3;
		}
		else
		{
			count++;
			if(count==2)
			 num=2;
			else
			{
				bool found=false;
				while(!found)
				{
					num++;
					if(isPrime(num))
					  break;
					
				}
			}
			if(count==n)
			{
				cout<<num<<" ";
				return 0;
			}	
		}
	}
	return 0;
}

