// Code by Kriti Raj
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define PI 3.14159265358979323846

/*================================================*/
/*================================================*/

int main()
{
    ll t(1);
    // cin >> t;
    while (t--)
    {
        ll n, k, l, c, d, p, nl, np;
        cin >> n >> k >> l >> c >> d >> p >> nl >> np;
        cout << min(min(k * l / nl, c * d), p / np) / n << endl;
    }
    return 0;
}