#include<iostream>
using namespace std;
int merge(int arr[],int aux[],int l,int m,int r);
int mergesort(int arr[],int aux[],int l,int r);
int mergesort(int arr[],int aux[],int l,int r)
{
	int m,inv=0;
	if(r>l)
	{
		m=(r+l)/2;
		inv=mergesort(arr,aux,l,m);
		inv+=mergesort(arr,aux,m+1,r);
		inv+=merge(arr,aux,l,m+1,r);
	}
	return inv;
}
int merge(int arr[],int aux[],int l,int m,int r)
{
	int i,j,s;
	int inv=0;
	i=l;
	j=m;
	s=l;
	while((i<=m-1)&&(j<=r))
	{
		if(arr[i]<=arr[j])
		{
			aux[s++]=arr[i++];
		}
		else
		{
			aux[s++]=arr[j++];
			inv=inv+(m-i);
		}
	}
	while(i<=m-1)
	 aux[s++]=arr[i++];
	while(j<=r)
	 aux[s++]=arr[j++];
	for(i=l;i<=r;i++)
	  arr[i]=aux[i];
	return inv;
	
}
int main()
{
   int n,temp;
   char co;
   cin>>n;
   int arr[n],aux[n];
   for(int i=0;i<n;i++)
   {
   	 cin>>temp;
   	 if(i<n-1)
   	  cin>>co;
   	 int sum=0;
   	 while(temp!=0)
   	 {
   	 	sum=sum+(temp%6);
   	 	temp=temp/6;
	 }
	arr[i]=sum;
   }
   int res=mergesort(arr,aux,0,n-1);
   cout<<res;
    return 0;
}
