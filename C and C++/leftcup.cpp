#include<bits/stdc++.h>
using namespace std;
void reverse(string s,int i,int j,int k,int l)
{
 for(;i!=j&&i<j;i++,j--)
 {
 	char temp=s[i];
 	s[i]=s[j];
 	s[j]=temp;
 }
 cout<<s;
  int flag=0;
  for(;k!=l&&k<l;k++,l--)
  {
  	if(s[k]!=s[l])
  	{
  		flag=1;
  		break;
	}
  }
  if(flag==0)
   cout<<endl<<"Yes"<<endl;
  else
   cout<<endl<<"No"<<endl;
}
int main()
{
  string s;
  cin>>s;
  int q;
  cin>>q;
  while(q--)
  {
  int i,j,k,l,flag=0;
  cin>>i>>j>>k>>l;
  reverse(s,i-1,j-1,k-1,l-1);
  }
  return 0;
}
      
