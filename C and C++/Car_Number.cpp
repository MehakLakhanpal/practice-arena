#include<iostream>
using namespace std;
int main()
{
	int N,Number;
	cin>>N;
	while(N--)
	{
		cin>>Number;
		int sum=0;
	/*	while(Number!=0)
		{
			sum +=Number%10;
			Number/=10;
		}*/
		sum=Number%10 + (Number%100)/10 + (Number%1000)/100 + Number/1000;
		if(sum%2==0)
		{
			if(sum%4==0)
			  cout<<"Yes"<<endl;
			else
			  cout<<"No"<<endl;
			
		}
		else
		{
			if(sum%3==0)
			  cout<<"Yes"<<endl;
			else
			  cout<<"No"<<endl;
		}
	}
	return 0;
}
