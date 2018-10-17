#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n,d;
    cin>>n;
    int a[n+1]={0};
    for(int i=0;i<n;i++)
    {
    	cin>>d;
    	if(d!=0&&a[d]!=1)
    	  a[d]=1;
	}
	for(int i=1;i<=n;i++)
	{
		if(a[i]==0)
		 cout<<i<<" ";
	}
   }
   
   return 0;
 }
