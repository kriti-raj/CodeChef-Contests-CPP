#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t-- >0)
	{
	    int n;
	    int c = 0;
	    cin>>n;
	    while(n>0)
	    {
	        int rem = n%10;
	        if (rem == 4)
	        {
	            c++;
	        }
	        n = n/10;
	    }
	    cout<<c<<endl;
	}
	return 0;
}
