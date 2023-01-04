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
        ll n, x, y, a, b, c, d, e;
        cin >> n >> x >> y;
        a = (n - x) + (x - 1) + (n - y) + (y - 1);
        b = min(x - 1, y - 1);
        c = min(x - 1, n - y);
        d = min(n - x, y - 1);
        e = min(n - x, n - y);
        a += b + c + d + e;
        cout << a << endl;
    }
    return 0;
}