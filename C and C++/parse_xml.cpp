#include<bits/stdc++.h>
#include<stack>
#include<string>
using namespace std;
int main()
{
	string str;
	getline(cin,str);
	stack<string> s;
	int flag=1,i=0,old=i,temp1,temp2,q;
	while(str[i]!='\0')
	{
		if(str[i]=='<'&&str[i+1]!='/')
		{
			temp1=str.find_first_of('>',i);
			temp2=str.find_first_of(' ',i);
			cout<<"in if"<<endl;
			if(temp1<temp2||(temp2==string::npos&&temp1!=string::npos))
			{
				int len=abs((i+1)-(temp1));
				string st=str.substr(i+1,len);
				cout<<st<<endl;
				s.push(st);
				i=temp1;
				
			}
			else if(temp1>temp2)
			{
				q=str.find_first_of('=',i);
				if(q!=string::npos&&isalnum(str[q+2]))
				{ 
				    int l=abs((i+1)-temp2);
					string st=str.substr(i+1,l);
					s.push(st);
					i=temp1;
				}
				else
				{
					flag=0;
					break;
				}
				
			}
			else
			{
				flag=0;
				break;
			}
			
		}
		else if(str[i]=='<'&&str[i+1]=='/')
		{
			temp1=str.find_first_of(">",i);
			int last=abs((i+2)-temp1);
			string st=str.substr(i+2,last);
			string s_top=s.top();
			s.pop();
			if(s_top!=st)
			{
				flag=0;
				break;
			}
			i=temp1;		
		}
		i++;
	}
	if(flag==0||s.empty()==false)
	{
		cout<<"Invalid";
	}
	else 
	cout<<"Valid";
	
	return 0;
	
}
