#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str;
	getline(cin,str);
	string path[7],stack[7];
	int pos=0,k=0,curlen,maxlen=INT_MIN,i=0;
	cin>>str;
	while(str[i]!='\0')
	{
		
		if(str[i]=='\n')
		{
			path[k]=str.substr(pos,(i-pos));
			pos=i+1;
			cout<<k<<endl;
			cout<<path[k];
			k++;
		}
		i++;	
	}
	cout<<k;
	return 0;
}
