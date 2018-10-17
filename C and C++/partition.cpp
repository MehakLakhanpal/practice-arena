#include<bits/stdc++.h>
using namespace std;
int res=0;
void check(int t[],int r)
{
	int c=0;
	for(int i=0;i<r;i++)
	{
		int num=t[i],f=0;
		cout<<t[i]<<" ";
		for(int j=2;j<sqrt(num);j++)
		{
			if(num%j==0)
			{
				f=1;
				break;
			}
		}
		if(f==0)
		c++; 	 
	}
	
	if(c>=2)
	 res++;	
}
void findDistinct(int n,int k)
{
	int t[n],p=0,flag=0;
	t[p]=n;
	while(1)
	{
		if((flag!=0)&&(p+1==k))
		 check(t,p+1);
		int rest=0;
		flag=1;
		while(p>=0&&t[p]==1)
		{
			rest+=t[p];
			p--;
		}
		if(p<0)
		 return;
		t[p]--;
		rest++;
		while(rest>t[p])
		{
			t[p+1]=t[p];
			rest=rest-t[p];
			p++;
		}
		t[p+1]=rest;
		p++;
	}
}
int main()
{
	int n,k;
	cin>>n>>k;
	findDistinct(n,k);
	cout<<res;
	return 0;
	
}
