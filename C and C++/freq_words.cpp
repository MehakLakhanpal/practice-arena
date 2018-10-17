#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
	unordered_map<string, int> m;
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		string temp;
		cin>>temp;
		m[temp]++;
	}
	for(auto i=m.begin();i!=m.end();i++)
	{
		cout<<m.first<<" "<<m.second<<endl;
	}
}
