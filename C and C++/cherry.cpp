#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		int c1=0,c2=0;
		cin>>n>>m;
		char a[n][m];
		for(int i=0;i<n;i++)
		{
			
			for(int j=0;j<m;j++)
			{
				cin>>a[i][j];
				if((i+j)%2==0)
				{
				if(a[i][j]=='R')
				 c1+=5;
				else
				 c2+=3;
			}
			else
			{
				if(a[i][j]=='R')
				 c2+=5;
				else
				 c1+=3;
			}
			cout<<"c1 "<<c1<<endl;
			cout<<"c2 "<<c2<<endl;
				 
			}
		}
		cout<<min(c1,c2)<<endl;
		
		
	}
	return 0;
}
