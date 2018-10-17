#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num,sum=0,rev,b=1;
	cin>>num;
	while(num)
	{
		rev=num%2;
		sum=sum+rev*b;
		b*=10;
		num/=2;
	}
	cout<<sum;
	return 0;
}
