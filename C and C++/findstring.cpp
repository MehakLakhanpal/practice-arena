#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s1[4],s2[4],temp;
		int count=0,j=0;
	    for(int i=0;i<4;i++)
	       cin>>s1[i];
	    for(int i=0;i<4;i++)
	      {
	      	cin>>s2[i];  
	      	if(s1[j]==s2[i]||s1[j+1]==s2[i]||s1[j+2]==s2[i]||s1[j+3]==s2[i])
	      	 count++;
	      	
		   }        
		if(count>=2)
		 cout<<"yes"<<endl;
		else
		 cout<<"no"<<endl;
		
	}
	return 0;
}
