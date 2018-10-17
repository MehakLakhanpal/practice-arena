#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	vector<pair<int,int> > v;
	cout<<"Enter the size of the array :";
	cin>>n;                         /*n Size of the array*/        
	int A[n][n];
	int len=n,k=1,p=0,i;            /*k is to assign the values to the array from 1...n*n */
									/*len is used to update(decrease) array size so that values cans be assign to them */
	while(k<=n*n)                      
	{
		for(i=p;i<len;i++)         /*Loop to access the first row of the array*/
		{
			A[p][i]=k++;
		}
		for(i=p+1;i<len;i++)      /*Loop tp access the last column of the array*/
		{
			A[i][len-1]=k++;
		}
		for(i=len-2;i>=p;i--)     /*Loop to access the last row of the array*/ 
		{
			A[len-1][i]=k++;
		}
		for(i=len-2;i>p;i--)      /*Loop to access the first column of the array*/
		{
			A[i][p]=k++;
		}
		p++,len=len-1;
		
	}
	if(!n%2)                      /*This block will run only if n is even*/
	{
		A[(n+1)/2][(n+1)/2]=n*n; /*It will assign the last value to the centremost element*/
	}
	v.push_back(std::make_pair(0,0));
	int c=1;
	for(i=0;i<n;i++)             /*This loop will print the array in matrix format*/
	{
		for(int j=0;j<n;j++)
		{
			cout<<A[i][j]<<"\t";
			if((A[i][j]%11)==0)
			{
			 v.push_back(std::make_pair(i+1,j+1));	 
			 c++; 
		    }
		}
		cout<<endl;
	}
	cout<<endl<<"Total Power points : "<<c<<endl;
	for(int i=0;i<v.size();i++)
	  cout<<'('<<v[i].first<<','<<v[i].second<<')'<<endl;
	return 0;
}
