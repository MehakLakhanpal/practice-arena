#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int flag=0,count=0;
		string s;
		cin>>s;
		for(int i=0;s[i]!='\0';i++)
		{
			if(s[i]=='0'&&flag!=0)
			  flag=0;
			else if(s[i]=='1')
			{
				if(count>0&&flag==0)
				{
					count=-1;
					break;
				}
				count++;
				if(flag!=1)
				  flag=1;
			}
		}
		if(count==0||count==-1)
		  cout<<"NO"<<endl;
		else
		  cout<<"YES"<<endl;
		
	}
	return 0;
}
