#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	  int j=0,flag=0;
	  string m,w;
	  cin>>m>>w;
	  int l=m.length();
	  for(int i=0;m[i]!='\0';i++)
	  {
		if(m[i]==w[j])
		 j++;
	  }
	  if(j==l)
	   cout<<"YES\n";
	  else
	   cout<<"NO\n";
	}
	return 0;
}
