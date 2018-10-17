#include<bits/stdc++.h>
using namespace std;
const int MAX_SIZE=26;
struct Key
{
	int freq;
	char ch;
	bool operator<(const Key &k)const
	{
		return freq<k.freq;
	}
};
priority_queue< Key > pq;
void rearrange(string  str)
{
	int count[MAX_SIZE]={0};
	int n=str.length();
	for(int i=0;i<n;i++)
	  count[str[i]-'a']++;
	for(char c='a';c<='z';c++)
	{
		if(count[c-'a'])
		  pq.push(Key{count[c-'a'],c});
	}
	str="";
	Key prev{-1,'#'};
	while(!pq.empty())
	{
		Key k=pq.top();
		pq.pop();
		str=str+k.ch;
		if(prev.freq>0)
		  pq.push(prev);
		(k.freq)--;
		prev=k;	
	}
	if(n!=str.length())
	  cout<<"Not possible";
	else
	 cout<<str;
	 
	
}
int main()
{
	string str;
	cout<<"Enter string";
	cin>>str;
	rearrange(str);
	return 0;
}
