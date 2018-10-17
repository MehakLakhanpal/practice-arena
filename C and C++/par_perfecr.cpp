#include<bits/stdc++.h>
using namespace std;
long int res=0;
bool isperfect(long double x);
void distinct(long int n,long int sum,long int arr[],long int curr,long int k)
{
	if(sum+arr[curr]==n&&curr==k-1)
	{
		long int c=0;
		for(int i=0;i<=curr;i++)
		{
			long double num=arr[i];
			if(isperfect(num))
		     c++; 
		     if(c>=2)
		      break;
		}
		if(c>=2)
		 res++;
		return;
	}
	else if(sum+arr[curr]>n)
	 return;
	else
	{
		if(curr<k)
		{
		for(int i=arr[curr]+1;i<n;i++)
		{
			arr[curr+1]=i;
			if(curr<k)
			distinct(n,sum+arr[curr],arr,curr+1,k);
		}
	}
	}
}
bool isperfect(long double x)
{
	long double s=sqrt(x);
	return ((s-floor(s))==0);
}
int main()
{
	long int n,k;
	char ch;
	cin>>n>>ch>>k;
	long int arr[10000];
	for(int i=1;i<n;i++)
	{
		arr[0]=i;
		distinct(n,0,arr,0,k);
	}
	cout<<res;
}
