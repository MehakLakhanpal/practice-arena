#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n],b[n],sum1=0,sum2=0,max1=INT_MIN,max2=INT_MIN;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			sum1+=a[i];
			if(max1<a[i])
			  max1=a[i];
		}
		for(int i=0;i<n;i++)
		{
			cin>>b[i];
			sum2+=b[i];
			if(max2<b[i])
			  max2=b[i];
		}
		sum1-=max1;
		sum2-=max2;
		if(sum1==sum2)
		 cout<<"Draw"<<endl;
		else if(sum1<sum2)
		 cout<<"Alice"<<endl;
		else
		 cout<<"Bob"<<endl;
	}
	return 0;
}
