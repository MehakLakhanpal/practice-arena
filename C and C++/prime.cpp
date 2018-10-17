#include<bits/stdc++.h>
#include<sstream>
#include<string>
using namespace std;
int main()
{
	ostringstream ss;
	int num1=2,num2=3;
	string res;
    ss<<num2;
	res=ss.str();
	cout<<endl<<res;
	return 0;
	
}
ostringstream ss;
	vector <string> st;
	vector <string>::iterator i;
	string temp;
    int N; // Must be less than MAX_SIZE
    cin>>N;

    manipulated_seive(N);

    // pint all prime number less then N
    for (int i=0; i<prime.size() && prime[i] <= N ; i++)
    { 
      if(prime[i]%2!=0)
      {
      	cout<<prime[i]<<endl;
      	ss<<prime[i];
      	temp=ss.str();
      	st.push_back(temp);
	  }
    }
    for(i=st.begin();i!=st.end();i++ )
      cout<<*i<<'\t';
