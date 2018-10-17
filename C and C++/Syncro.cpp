#include<iostream>
using namespace std;
int main()
{
	int t;
	cout<<"Test cases:";
	cin>>t;
	for(int k=0;k<t;k++)
	{
		int m,n;
		cout<<"Enter no. of members:";
		cin>>m;
		cout<<"No. of Moves:";
		cin>>n;
		int A[m][n];
		cout<<"Enter moves for "<<m<<" members";
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
			 cin>>A[i][j];
		}
		int i=0,j=0;
		while(i<m&&j<n)
		{
			if(A[i][j]!=A[i+1][j])
			{
	          cout<<"\nCan't Compete";
			  exit(1);
		    } 
			i++;
			if(i==m-1)
			{
			   i=0;
			   j++;	
			}
		}
		cout<<"\nCan compete";
	}
}
