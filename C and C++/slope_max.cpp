#include<iostream>
using namespace std;
int findMaximum(int arr[],int low,int high)
{
	if(low==high)
	  return low;
	if((high==low+1)&&(arr[low]<arr[high]))
	  return high;
	if((high==low+1)&&arr[low]>arr[high])
	  return low;
	int mid=(high+low)/2;
	if(arr[mid]>arr[mid+1]&&arr[mid]>arr[mid-1])
	  return mid;
	if(arr[mid]<arr[mid-1]&&arr[mid]>arr[mid+1])
	  return findMaximum(arr,low,mid-1);
	else
	  return findMaximum(arr,mid+1,high);
}
int main()
{
	int arr[]={22,83,202,611,877,245,119,51,20};
	int n=sizeof(arr)/sizeof(arr[0]);
    int max=findMaximum(arr,0,n-1);
    cout<<arr[max]<<endl;
    int a[n],i=0,j=n-1,k=0;
    while(i<max+1&&j>max)
    {
    	if(arr[i]<arr[j])
    	  a[k++]=arr[i++];
    	else if(arr[i]>arr[j])
    	  a[k++]=arr[j--];
    	else
    	{
    	   a[k++]=arr[i];
    	   i++;
    	   j--;
    }
	}
	while(j>max)
	{
		a[k++]=arr[j--];
	}
	while(i<max+1)
	{
		a[k++]=arr[i++];
	}
	cout<<"Sorting:\n";
	for(int i=0;i<k;i++)
	 cout<<a[i]<<endl;
	 return 0;
	 
    
    
    
}
