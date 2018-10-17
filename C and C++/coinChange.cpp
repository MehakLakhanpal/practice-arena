#include<iostream>
#include<string>
using namespace std;
int coinChange(int coins[],int rem,int count[],int n)
{
	if(rem<0)
	 return -1;
	if(rem==0)
	 return 0;
	if(count[rem-1])
	 return count[rem-1];
	int min=INT_MAX;
	for(int i=0;i<n;i++)
	{
		int res=coinChange(coins,rem-coins[i],count,n);
		if(res>=0&&res<min)
		 min=res+1;
	}
	count[rem-1]=(min==INT_MAX)?-1:min;
	return count[rem-1];
}
int main()
{
	int n,amt;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	 cin>>arr[i];
	cout<<"Enter amount:";
	cin>>amt;
	int count[amt];
	 cout<<coinChange(arr,amt,count,n);
	 return 0;	
}
