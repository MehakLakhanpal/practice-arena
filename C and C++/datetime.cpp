#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> v;
	vector<int> :: iterator it;
	int flag=0,res1[4],res2[4],max=INT_MIN,index,temp,s,mon,flag2=0,flag3=0;
	char c;
	for(int i=0;i<12;i++)
	{
		if(i>0)
		 cin>>c;
		cin>>temp;
		v.push_back(temp);
		if(temp==0||temp==1||temp==2)
		  flag=1;
	}
	if(flag==0)
	{
		cout<<"0";
		return 0;
	}
	s=v.size();
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<s;j++)
		{
			if(i==0)
			{
				if(v[j]<=1&&max<v[j])
				{
					res1[0]=v[j];
					index=j;
				}
			}
			else if(i==1)
			{
				if(res1[0]==1)
				{
					if(v[j]<=2&&max<v[j])
					{
						res1[1]=v[j];
						index=j;
					}
				}
				else
				{
					if(max<v[j])
					 {
					 	res1[1]=v[j];
					 	index=j;
					 }
				}
			}
			else if(i==2)
			{
				if(mon==2)
				{
					if(v[j]<=2&&max<v[j])
					{
					res1[2]=v[j];
					index=j;
				   }
					
				}
				else
				{
				if(v[j]<=3&&max<v[j])
				{
					res1[2]=v[j];
					index=j;
				}
			} }
			else if(i==3)
			{
				if(res1[2]==3)
				{
					if(mon==4||mon==6||mon==9||mon==11)
					{
					if(v[j]==0)
					{
						res1[3]=v[j];
						index=j;
						flag2=1;
					}
				    }
					else
					{
					 if(v[j]<=1&&max<v[j])
					{
						res1[3]=v[j];
						index=j;
						flag3=1;
					}
					}
			
				}
				else if(v[j]==2)
				{
					 if(v[j]<=8&&max<v[j])
					{
						res1[3]=v[j];
						index=j;
					}
				}
				else
				{
					if(max<v[j])
					{
						res1[3]=v[j];
						index=1;
					}
				}
			}
		}
		if(i==3)
		{
			if(flag2==1||flag3==1)
			 v.erase(v.begin()+index);
		}
		
		else if(i!=3)
		v.erase(v.begin()+index);
		if(i==1)
		  mon=res1[0]*10+res1[1];
		s=v.size();
	}
	flag=0;
	for(int i=0;i<s;i++)
	{
		if(v[i]==0||v[i]==1||v[i]==2)
		 flag=1;
	}
	if(flag==0)
	{
		cout<<"0";
		return 0;
	}
	if(flag2==1||flag3==1)
	{
		if(res1[2]==3)
		 cout<<"0";
		 return 0;
	}
	
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<s;j++)
		{
			if(i==0)
			{
				if(v[j]<=2&&max<v[j])
				{
					res2[0]=v[j];
					index=j;
				}
			}
			else if(i==1)
			{
				if(res2[0]==2)
				{
					if(v[j]<=3&&max<v[j])
					{
						res2[1]=v[j];
						index=j;
					}
				}
				else
				{
					if(max<v[j])
					 {
					 	res2[1]=v[j];
					 	index=j;
					 }
				}
			}
			else if(i==2)
			{
				if(v[j]<=5&&max<v[j])
				{
					res2[2]=v[j];
					index=j;
				}
			}
			else if(i==3)
			{
					if(max<v[j])
					{
						res2[3]=v[j];
						index=j;
					}
				
			}
		}
		v.erase(v.begin()+index);
		s=v.size();
	}
	int res=(res1[0]*1000)+res1[1]*100+res1[2]*10+res1[3];
	 if(res>101)
	{
	cout<<res1[0]<<res1[1]<<"/"<<res1[2]<<res1[3];
	cout<<" "<<res2[0]<<res2[1]<<":"<<res2[2]<<res2[3];
    }
    else
    cout<<"0";
	return 0;
}
