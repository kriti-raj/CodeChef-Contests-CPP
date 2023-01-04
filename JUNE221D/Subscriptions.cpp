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
        if (a % 6 == 0)
        {
            cout << (a / 6) * b << endl;
        }
        else if (a % 6 != 0)
        {
            cout << ((a / 6) + 1) * b << endl;
        }
    }
    return 0;
}