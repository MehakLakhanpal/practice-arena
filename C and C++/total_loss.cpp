#include<bits/stdc++.h>
using namespace std;
int main()
{
 int t;
 cin>>t;
 while(t--)
 {
   int n;
   double t_loss=0.00;
   cin>>n;
   for(int i=0;i<n;i++)
   {
     double price,q,dis,loss,cp;
     cin>>price>>q>>dis;
     cp=(dis/100*price)+price;
     loss=(price-(cp-(dis/100*cp)))*q;
     t_loss+=loss;
    }
    cout<<fixed<<setprecision(9)<<t_loss<<endl;
  } 
  return 0;
 }
    
