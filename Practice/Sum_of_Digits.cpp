#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t-- >0){
	    int n;
	    cin>>n;
	    int sum = 0;
	    while(n > 0){
	        sum += n%10;
	        sum = sum + n%10;
	        n /=10;
	    }
	    cout<<sum/2<<endl;
	}

	return 0;
}
