#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int day=0,a[30];
    for(int i=0;i<30;i++)
    {
      cin>>a[i];
    }
    for(int i=0;i<30;i++)
    {
      if(a[i])
      {
         day++;
         if(day>5)
        {
         cout<<"#coderlifematters";
         cout<<endl;
         break;
       }
       }
      else
        day=0;
     }
    if(day<=5)
     cout<<"#allcodersarefun";
     cout<<endl;
   }
   return 0;
  }
