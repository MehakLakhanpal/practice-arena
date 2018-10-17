#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	vector<int> v1,v2;
	cin>>n;
	int arr[n];
	cout<<"Enter n elements:";
	for(int i=0;i<n;i++)
	  cin>>arr[i];
	int i,j;
	for(i=0;i<n&&arr[i]<0;i++)
	   v1.push_back(arr[i]);
	for(;i<n&&(arr[i]>=0);i++)
	   v2.push_back(arr[i]);
	reverse(v1.begin(),v1.end());
	i=0,j=0;
	while(i<v1.size()&&j<v2.size())
	{
		if(abs(v1[i])<v2[j])
		{
			cout<<v1[i]<<" ";
			i++;
		}
		else if(abs(v1[i])>v2[j])
		{
			cout<<v2[j]<<" ";
			j++;
		}
		else
		{
			cout<<v1[i]<<" "<<v2[j]<<" ";
			i++;
			j++;
		}
	}
	while(i<v1.size())
	{
		cout<<v1[i]<<" ";
		i++;
	}
	while(j<v2.size())
	{
		cout<<v2[j]<<" ";
		j++;
	}
	
}
