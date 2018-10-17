#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
	map<char,int> m;
	map<char,int>::iterator it;
	string s;
	int j=0,temp=0,maxi=INT_MIN,start=0,pos;
	cin>>s;
	for(int i=0;s[i]!='\0';i++)
	{
		it=m.find(s[i]);
		if(it!=m.end())
		{
			pos=(it->second)+1;
			j=max(pos,j);
		}
		m[s[i]]=i;
		temp=max(temp,i-j+1);
		if(temp>maxi)
		{
			maxi=temp;
			start=j;
		}
	}
	cout<<maxi<<endl;;
	cout<<"string is:"<<s.substr(start,maxi);
	return 0;
}
