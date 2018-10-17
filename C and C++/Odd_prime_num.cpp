#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N=50;
	int prime[N],smallPF[N],k=0; //prime[] : stores all the numbers upto N 
	                             //smallPF[] : stores smallest prime factor of number
	                             //k : to count no. of elements in prime[]
	bool isPrime[N];             //isPrime[] : is true when the number is prime else false
	memset(isPrime,true,sizeof(isPrime));	//set all the numbers till N with true value
	for(int i=2;i<=N;i++) 
	{
		if(isPrime[i]) //if i is a prime number 
		{
			prime[k++]=i; //store i into prime[]
			smallPF[i]=i; //a prime number is its own smallest prime factor
		}
		// this loop executes till multiples of i*prime[j]<=N  and elements in prime[j] 
		//less than or equal to smallest prime factor of i
		for(int j=0;j<k && i*prime[j]<=N && prime[j]<=smallPF[i];j++)
		
		{
			isPrime[i*prime[j]]=false; //remove all the multiples of i*prime[j] which are not prime by setting isPrime[i*prime[j]]=false
			smallPF[i*prime[j]]=prime[j]; //to store smallest prime factor of i*prime[j]
		}
	}
	cout<<"Odd prime numbers upto "<<N<<" are"<<endl;
	for(int i=0;i<k;i++)
	{
		if(prime[i]%2!=0) //print odd prime numbers
		  cout<<prime[i]<<endl;
	}
	return 0;
	
}
