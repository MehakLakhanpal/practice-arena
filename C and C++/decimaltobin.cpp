#include<iostream>
using namespace std;
int g(int n1,int n2)
{ 
    int gcd=1;
	for(int i=1;i<=n1&&i<=n2;i++)
	{
		if((n1%i==0)&&(n2%i==0))
		  gcd=gcd*i;
	}
	return gcd;
}
int main()
{
	int n1,n2,res;
	cin>>n1>>n2;
    res=g(n1,n2);
	cout<<(n1*n2)/res;
	return 0;
}
