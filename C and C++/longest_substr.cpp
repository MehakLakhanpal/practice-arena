#include<iostream>
using namespace std;
void print(string x,string y,int m,int n)
{
	int ls[m+1][n+1];
	int len=0,row,col;
	for(int i=0;i<=m;i++)
	{
		for(int j=0;j<=n;j++)
		{
			if(i==0||j==0)
			 ls[i][j]=0;
			else if(x[i-1]==y[j-1])
			{
				ls[i][j]=ls[i-1][j-1]+1;
				if(len<ls[i][j])
				{
					len=ls[i][j];
					row=i;
				}
			}
			else
			 ls[i][j]=0;
		}
	}
	cout<<x.substr(row-len,len);
	return;
}
int main()
{
	string x="GeeksforGeeks";
	string y="GeeksQuiz";
	int m=x.length();
	int n=y.length();
	print(x,y,m,n);
	return 0;
}
