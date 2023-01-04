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
        ll a, b, c, d;
        cin >> a >> b >> c >> d;
        int x = c * d;
        if (b - x - a > 0)
        {
            cout << "Unfilled" << endl;
        }
        else if (b - x - a < 0)
        {
            cout << "overFlow" << endl;
        }
        else if (b - x - a == 0)
        {
            cout << "filled" << endl;
        }
    }
    return 0;
}