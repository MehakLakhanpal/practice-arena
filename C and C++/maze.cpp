#include<iostream>
#define N 4
using namespace std;
int isSafe(int M[][N],int i,int j)
{
	if((i!=N-1)&&(j!=N-1))
	 return 2;
	else if((i==N-1)&&(j!=N-1))
	 return 1;
	else
	 return 0;
}

int main()
{
	int M[N][N];
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<N;j++)
		 cin>>M[i][j];
	}
	int cart=M[0][0],i=0,j=0;
	while(i!=N&&j!=N)
	{
		if(isSafe(M,i,j)==2)
		{
			if(M[i][j+1]<M[i+1][j])
			{
				j++;
				if(cart<M[i][j])
				 cart=M[i][j];
			}
			else
			{
				i++;
				if(cart<M[i][j])
				 cart=M[i][j];
			}
		}
		else if(isSafe(M,i,j)==1)
		{
			j++;
			if(cart<M[i][j])
			 cart=M[i][j];
		}
		else
		{
			i++;
			if(cart<M[i][j])
			 cart=M[i][j];
		}
	}
	cout<<cart<<endl;
	return 0;
}
