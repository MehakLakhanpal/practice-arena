#include<iostream>
using namespace std;
void e(int n)
{
	if(n>0)
	{
		e(--n);
		cout<<n;
		e(--n);
	}
}
int main()
{
	int i=4,j=2;
	int b=5+7*4-9*(3,2);
	cout<<b;
	return 0;
}
