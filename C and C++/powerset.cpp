#include<bits/stdc++.h>
using namespace std;
void subsetu(vector<int>& A,vector<vector<int>>& res,vector<int>& subset,int index)
{
	for(int i=index;i<A.size();i++)
	{
		subset.push_back(A[i]);
		res.push_back(subset);
		subsetu(A,res,subset,i+1);
		subset.pop_back();
	}
	return;
}

vector<vector<int>>subsets(vector<int>& A)
{
	vector<int>subset;
	vector<vector<int>> res;
	res.push_back(subset);
	int index=0;
	subsetu(A,res,subset,index);
	return res;
}
int main()
{
	vector<int> array={1,2,3};
	vector<vector<int>>res=subsets(array);
	for(int i=0;i<res.size();i++)
	{
		for(int j=0;j<res[i].size();j++)
		{
			cout<<res[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
