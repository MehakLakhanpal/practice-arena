#include<iostream>
using namespace std;
long long int c=0;
long long int subsets(long long int a[],long long int n,int s,long long int index,long long int data[],long long int k,long long int p)
{
	if(index==s)
	{
		int sum=0;
		for(int j=0;j<s;j++)
		{
		 sum+=data[j];
     	}
		if(sum%p==0)
		{
		 c++;
     	}
		return c;
	}
	if(k>=n)
	return c;
	data[index]=a[k];
	subsets(a,n,s,index+1,data,k+1,p);
	subsets(a,n,s,index,data,k+1,p);
	
}
int main()
{
	long long int n,p,k=0,count=0;
	int s=3;
	char co;
	cin>>n>>co>>p;
	long long int a[n],data[s];
	for(long long int i=0;i<n;i++)
	{
	 cin>>a[i];
	 if(i<n-1)
	 cin>>co;
	 if((a[i]%p)==0)
	  count++;
    } 
	 if(count==0)
	  cout<<"0";
	else
	{
		long long int res=subsets(a,n,s,0,data,0,p);
		cout<<(res%1009);
	}
	return 0;
   }
