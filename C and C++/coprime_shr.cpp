#include<bits/stdc++.h>
using namespace std;
int main()
{
	set<int> set1;
	set<int> :: iterator itr; 
	int n;
	cin>>n;
	while(n%2==0)
	{
		set1.insert(2);
		n/=2;
	}
	for(int i=3;i<=sqrt(n);i+=2)
	{
		while(n%i==0)
		{
			set1.insert(i);
			n/=i;
		}
	}
	int temp1;
	float t=n,temp2;
	for(itr=set1.begin();itr!=set1.end();itr++)
	{
		cout<<*itr<<endl;
		temp1= *itr;
		temp2=t*(1-(1/temp1));
		t=temp2;
	}
	cout<<fixed<<setprecision(1)<<temp2;
}
