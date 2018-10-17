
#include<bits/stdc++.h>
#include<string>
using namespace std;
bool iPrime(int n)
{
	int flag=0;
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	 return false;
	else
	 return true;
}
int main()
{
	stringstream ss;
	string temp1,temp2;
	int N;
	cin>>N;
	int prime[N],smallPF[N],k=0,count=0;                
	bool isPrime[N];             
	memset(isPrime,true,sizeof(isPrime));	
	for(int i=2;i<=N;i++) 
	{
		if(isPrime[i]) 
		{
			prime[k++]=i;
			smallPF[i]=i; 
		}
		for(int j=0;j<k && i*prime[j]<=N && prime[j]<=smallPF[i];j++)
		
		{
			isPrime[i*prime[j]]=false;                                                                                                                           			smallPF[i*prime[j]]=prime[j]; 
		}
	}
	string st[k];
	for(int i=0;i<k;i++)
	{
		ss.str("");
      	ss<<prime[i];
      	st[i]=ss.str();
	}
	for(int i=0;i<k;i++ )
    {
    	for(int j=i+1;j<k;j++)
    	{
    		temp1=st[i]+st[j];
    		temp2=st[j]+st[i];
    		int num1=atoi(temp1.c_str());
    		int num2=atoi(temp2.c_str());
    		if(iPrime(num1))
    		  count++;
    		if(iPrime(num2))
    		  count++;
		}
	}
	cout<<count;
	return 0;
	
}


