#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector <string> path;
	int maxlen;
	vector <int> stk;
	stk.push_back(0);
	string input="dir\n\tsubdir\n\t\tfile1.ext\n\t\tsubsubdir1\n\tsubdir2\n\t\tsubsubdir2\n\t\t\tfile2.ext",rst,temp;
	int loc=input.find("\n",0);
	while(loc!=string::npos)
	{
		rst=input.substr(0,input.find("\n")-1);
		input=input.substr(input.find("\n")+1,input.length());
		loc=input.find("\n",0);
		path.push_back(rst);
	}
	
	path.push_back(input);
	for(int i=0;i<path.size();i++)
	{
	  temp=path[i];
	  int lev=temp.find_last_of("\t")+1;
	  stk[lev+1]=stk[lev]+temp.size()-lev+1;
	  int curlen=stk[lev+1];
	  if(temp.find(".")!=string::npos)
	    maxlen=max(maxlen,curlen-1); 
    }
    cout<<maxlen<<endl;
	
	
	
	return 0;
	
	
}
