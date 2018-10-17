#include<bits/stdc++.h>
using namespace std;
int res=0;
void distinct(int n,int sum,int arr[],int curr,int k)
{
	if(sum+arr[curr]==n&&curr==k-1)
	{
		int c=0;
		for(int i=0;i<=curr;i++)
		{
			int num=arr[i],f=0;
	    	for(int j=2;j<=sqrt(num);j++)
		    {
			  if(num%j==0)
		      {
				f=1;
				break;
		      }
		    }
		if(f==0&&num!=1)
		{
		 c++; 
    	}
    	if(c>2)
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
		for(int i=arr[curr]+1;i<n;i++)
		{
			arr[curr+1]=i;
			distinct(n,sum+arr[curr],arr,curr+1,k);
		}
	}
}
int main()
{
	int n,k;
	char ch;
	cin>>n>>ch>>k;
	int arr[10000];
	for(int i=1;i<n;i++)
	{
		arr[0]=i;
		distinct(n,0,arr,0,k);
	}
	cout<<res;
}
