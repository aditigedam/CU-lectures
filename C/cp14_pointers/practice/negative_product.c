#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    vector<int>v(3);
	    int a=0, b=0;
	    for(int i=0;i<3;i++)
	    {
	        cin>>v[i];
	        if(v[i]>0)
	        {
	            a++;
	        }
	        else if(v[i] <0)
	        {
	            b++;
	        }
	    }
	    
	    if(a>0 && b>0)
	    {
	        cout<<"YES"<<endl;
	    }
	    else
	    {
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
