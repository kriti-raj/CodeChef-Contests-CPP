#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t-- >0){
        int n;
        cin>>n;
        int temp = n;
        int len = 0;
        while (temp > 0){
            len++;
            temp /=10;
        }
        int arr[len];
        int i= 0;
        while(n>0){
            arr[i] = n%10;
            n /=10;
            i++;
        }
        int ans = 0;
        for(int i=0; i<len; i++){
            ans += arr[i]* pow(10, len-1-i);
        }
        cout<<ans<<endl;
    }
	return 0;
}
