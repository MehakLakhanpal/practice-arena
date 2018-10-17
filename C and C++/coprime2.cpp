#include<iostream>
using namespace std;
int *p[100000>>5];
int pos[9594];
#define prime(i) ((p[i>>5]&(1<<(i&(31)))))
#define set(j) (p[j>>5]|=(1<<(j&(31))))
#define lim 100000
#define s 317
int sieve_e()
{
	int i,j,n,t,x,k,l,h;
	set(1);
	pos[1]=2;
	pos[2]=3;
	for(k=2,l=3,i=5,i<=s;k++,i=3*k-(k&1)-1)
	{
		if(prime(k)==0)
		{
			pos[l++]=i;
			for(j=i*i,h=((j+2)/3);j<=lim;h+=(k&1)?(h&1?((k<<2)-3):((k<<1)-1)):(h&1?((k<<1)-1):((k<<2)-1)),j=3*h-(h&1)-1);
			set(h);
		}
	}
	i=3*k-(k&1)-1;
	for(;i<=lim;k++,i=3*k-(k&1)-1)
	{
    	if(prime(k)==0)
    	{
    		pos[l++]=i;
    		isPrime[i]=true;
		}
	}
	return l;
}
int coprime(int *fac,int st,int nf,int n)
{
	int sum=0;
	if(st==nf-1)
	 return (m/fac[st]);
	return (m/fac[st]+coprime(fac,(st+1),nf,m)-coprime(fac,(st+1),nf,m/fac[st]));
}
int main()
{
	int x=sieve_e();
	int n;
	cin>>n;
	int nf=0;
	int fac[17];
	for(int i=1;pos[i]<=n;i++)
	{
		if(n%p[i]==0)
		{
			fac[nf++]=pos[i];
		}
	}
	if(nf==0)
	 cout<<n;
	else
	{
		int lim=coprimes(fac,0,nf,m);
		cout<<n-lim;
	}
	return 0;
}
