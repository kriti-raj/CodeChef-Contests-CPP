#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t-- >0){
	    int n;
	    cin>>n;
	    int sum = 0;
	    sum += n%10;
	    
	    
	    while(n>=10){
	        n /=10;
	    }
	    sum += n;
	    cout<<sum<<endl;
	    
	    
	    
	}
		return 0;
}
