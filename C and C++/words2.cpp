#include<bits/stdc++.h>
using namespace std;
string arr1[]={"","one ","two ","three ","four ",
              "five ","six ","seven ","eight ",
			  "nine ","ten ","eleven ","twelve ",
			  "thirteen ","fourteen ","fifteen ",
			  "sixteen ","seventeen ","eighteen ",
			  "nineteen "
			  };
string arr2[]={"","","twenty ","thirty ","forty ","fifty ","sixty ","seventy ","eighty ","ninety "};
string words(int num,string s)
{
	string str="";
	if(num>19)
	 str+=arr2[num/10]+arr1[num%10];
	else
	 str+=arr1[num];
	if(num)
	 str+=s;
	return str;
}
string convert(long num)
{
	string res;
	res+=words(((num/1000)%100),"thousand ");
	res+=words(((num/100)%10),"hundred ");
	res+=words((num%100),"");
	return res;
	 
}
int main()
{
	long n1,n2;
	cin>>n1;
	cin>>n2;
	if(n1>99999||n2>99999)
	cout<<"Out of bounds";
	else
	{
	long temp3=n1,temp4=n2;
	 long temp1,temp2;
	 while(temp3!=temp4)
	 {
	 	temp1=temp3;
	 	temp2=temp4;
	    string w1=convert(temp3);
	    string w2=convert(temp4);
	    cout<<w1<<" "<<w2<<endl;
	    cout<<temp3<<" "<<temp4<<endl;
	 if(w1>w2)
	 {
	 	w1.swap(w2);
	 	swap(temp1,temp2);
	 	cout<<temp1+temp3;
	 	return 0;
	 }
	 temp3=temp3+temp1;
	 temp4+=temp2;
	 if(temp3>99999||temp4>99999)
	 {
	   cout<<"Out of bounds"; 
	   return 0;
     }
    }	
  }
  return 0;
}
