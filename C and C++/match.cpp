#include<iostream>
using namespace std;
int main()
{
	int s,mem,other,m,min=INT_MAX,temp1,temp2;
	cin>>s>>mem>>other>>m;
	int block[m],s_seat=1,seat;
	for(int i=0;i<m;i++)
	 cin>>block[i];
	for(int i=0;i<m;i++)
	{
		int j=i,k=other,temp_m=mem,un=0;
		seat=s_seat;
		while((j<m&&temp_m>0)&&un<=15)
		{
			if(j%2==0)
			{
				temp_m=temp_m-block[j];
			}
			else
			{
				if(k>0)
				{
					if(block[j]>k)
					{
						un+=(block[j]-k);
						k=0;
					}
					else
					  k-=block[j];
				}
				else
				 un+=block[j];
			}
			seat+=block[j];
			j++;
		}
		cout<<s_seat<<endl;
		int temp=seat-s_seat;
		if(temp<min&&un<=15)
		{
		 min=temp;
		 temp1=s_seat;
		 temp2=seat;
    	}
    	s_seat+=block[i];
			
	}
	if(min!=INT_MAX)
	{
		cout<<"start="<<temp1<<" end="<<temp2;
	 cout<<endl<<min;
    }
	 
	else
	 cout<<"0";
	return 0;
}
