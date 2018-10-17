#include<bits/stdc++.h>
using namespace std;
int main()
{
	map<int,int> m;
	map<int,int> :: iterator it;
	int arr[]={1,5,7,-1,5};
	int count=0,sum=6;
	for(int i=0;i<5;i++)
	{
		if(m.find(arr[i])==m.end())
		{
		  m[sum-arr[i]]=0;
    	}
		else
		{
			if(m[sum-arr[i]]==0)
			{
			  count++;
			  m[sum-arr[i]]++;
			  cout<<m[sum-arr[i]]<<endl;
	      	}
			  
		}
	}
	for(it=m.begin();it!=m.end();it++)
	 cout<<it->first<<" "<<it->second<<endl;
	cout<<count;
	
}
