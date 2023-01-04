#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define PI 3.14159265358979323846;
int main()
{
    ll t;
    cin >> t;
    while (t-- > 0)
    {
        ll a, b;
        cin >> a >> b;
        int x = (a + b)/2;
        if (x%2==0)
        {
            cout<<"Alice"<<endl;
        }
        else if (x%2!=0)
        {
            cout<<"Bob"<<endl;
        }
        
    }
    return 0;
}