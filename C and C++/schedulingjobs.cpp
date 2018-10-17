#include<bits/stdc++.h>
using namespace std;
struct act
{
	int start,finish;
};
bool compare(act s1,act s2)
{
	if(s1.finish<s2.finish)
	 return true;
	else
	 return false;
	
}
int schedule(act arr[],int n)
{
	sort(arr,arr+n,compare);
	for(int k=0;k<n;k++)
	 cout<<arr[k].start<<" "<<arr[k].finish<<endl;
	int i=1,j=0,count=1,max=INT_MIN;
	while(i<n&&j<n)
	{
		if(arr[i].start<=arr[j].finish)
		{
			count++;
			i++;
			if(count>max)
			 max=count;
		}
		else
		{
			count--;
			j++;
		}
		cout<<count<<endl;
	}
	return max;
}
int main()
{
	act arr[]={{30,75},{0,50},{60,150}};
	int n=sizeof(arr)/sizeof(arr[0]);
	int result=schedule(arr,n);
	cout<<result;
	return 0;
}
