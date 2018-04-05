#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int number[n];
	int sum[n];
	int counter=0;
	while(counter!=n)
	{
		cin>>number[counter];
		while(number[counter]!=0)
		{
			sum[counter] +=number[counter]%10;
			number[counter]/=10;
		}
		counter++;
	}
	
	//Reset counter.
	counter=0;
	while(counter!=n){
		if(sum[counter]%3==0)
			cout<<"Yes"<<endl;
		else if (sum[counter]%4==0){
			if(sum[counter]%2==0)
				cout<<"No"<<endl;	
		}			
		else
			cout<<"No"<<endl;
		counter++;
	}
	return 0;
}
