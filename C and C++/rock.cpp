#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<pair<long long int,long long int> > sam;
	long long int r,s;
	cin>>r>>s;
	long long int rock[r];
	vector<long long int> res(s,0);
	for(long long int i=0;i<r;i++)
	 cin>>rock[i];
	for(long long int i=0;i<s;i++)
	{
		long long int temp1,temp2;
		cin>>temp1>>temp2;
	    sam.push_back(make_pair(temp1,temp2));
    }
	for(long long int i=0;i<sam.size();i++)
	{
		long long int min=sam[i].first;
		long long int max=sam[i].second;
		for(long long int j=0;j<r;j++)
		{
			if((unsigned)(min<rock[j]&&rock[j]<max))
			 res[i]++;
		}
	}
	for(long long int i=0;i<res.size();i++)
	 cout<<res[i]<<endl;
}
