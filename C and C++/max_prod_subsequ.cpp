#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n],lsl[n],lsr[n],temp,num1=0,num2=0,num3=0,max_p=INT_MIN;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=1;i<n-1;i++)
	{
		int max_l=INT_MIN,max_r=INT_MIN;
		for(int j=0;j<i;j++)
		{
		 if(arr[j]<arr[i]&&arr[j]>max_l)
		   max_l=arr[j];
     	}
		lsl[i]=(max_l==INT_MIN)?-1:max_l;
		for(int j=i+1;j<n;j++)
		{
		 if(arr[j]>arr[i]&&arr[j]>max_r)
		   max_r=arr[j];
	    }
	    lsr[i]=(max_r==INT_MIN)?-1:max_r;	
	}
	for(int i=1;i<n-1;i++)
	 cout<<lsl[i]<<" "<<lsr[i]<<endl;
	for(int i=1;i<n-1;i++)
	{
		if(lsl[i]!=-1&&lsr[i]!=-1)
		{
			temp=lsl[i]*lsr[i]*arr[i];
			if(temp>max_p)
			{
				num1=lsl[i];
				num2=arr[i];
				num3=lsr[i];
			}
		}
		
	}
	if(!(num1&&num2&&num3))
	  cout<<"not present this subsequence";
	else
	  cout<<num1<<" "<<num2<<" "<<num3;
	return 0;
}
