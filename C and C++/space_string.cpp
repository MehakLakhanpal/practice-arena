#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s,res;
	getline(cin,s);
	for(int i=0;i<s.length();i++)
	{
		int c=0,st=i;
		while(s[i]!=' '&&s[i]!='\0')
		{
			i++;
			c++;
		}
		if((c%2)==0)
		{
			int len=c/2;
			res=res+s.substr(st,len)+" "+s.substr(st+len,len)+" ";
		}
		else
		   res=res+s.substr(st,c)+" ";
	}
	cout<<res;
}
