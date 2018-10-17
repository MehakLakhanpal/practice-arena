#include<iostream>
using namespace std;
int main()
{
	int i,j,k,l,sum;
	for(i=1;i<10;i++)
	{
		sum=0;
		for(j=i+1;j<10;j++)
		{
			sum=i+j;
			if(sum==10)
			{
				cout<<i<<"\t"<<j<<"\n";
				break;
			}
			if(sum>10)
			 break;
			for(k=j+1;k<10;k++)
			{
				sum=i+j+k;
				if(sum==10)
				{
					cout<<i<<"\t"<<j<<"\t"<<k<<"\n";
					break;
				}
				if(sum>10)
				 break;
				for(l=k+1;l<10;l++)
				{
					sum=i+j+k+l;
					if(sum==10)
					{
						cout<<i<<"\t"<<j<<"\t"<<k<<"\t"<<"\t"<<l<<"\n";
					}
				}
			}
		}
	}
	return 0;
}
