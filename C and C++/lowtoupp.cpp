#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int l=s.length();
		if(s[0]>=97&&s[0]<=122)
		  s[0]=s[0]-32;
		for(int i=1;i<l;i++)
		{
			if(s[i]>=65&&s[i]<=90)
			 s[i]+=32;
			 
		}
		cout<<s<<endl;
	}
	return 0;
}
