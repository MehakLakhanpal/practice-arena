#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int zan,zon,start;
		cin>>start>>zan>>zon;
		if(zan>zon)
		 cout<<"-1 ";
		else
		{
			int s1,s2=zon;
			s1=start+zan;
			int c=1;
			while(s1!=s2)
			{
				if(s1<s2)
				 s1+=zan;
				else
				{
				s2+=zon;
				c++;
		    	}
		    	
		    }
			cout<<c<<" ";
		}
	}
	return 0;
	
}
