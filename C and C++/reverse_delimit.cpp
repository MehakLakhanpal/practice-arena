#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s,temp="",res="";
	getline(cin,s);
	int i=0,j=s.length()-1;
	while(i<s.length()||j>=0)
	{
		if(j==s.length()-1&&(!isalpha(s[j])))
	     j--;
		while(isalpha(s[j]))
		{
			temp+=s[j];
			j--;
		}
		while(isalpha(s[i]))
		 i++;
		if((!(isalpha(s[j]))&&(!isalpha(s[i]))))
		{
			reverse(temp.begin(),temp.end());
			 res=res+s[i]+temp;

			temp="";
			j--;
			i++;
		}
	}
	cout<<res;
	return 0;
}
