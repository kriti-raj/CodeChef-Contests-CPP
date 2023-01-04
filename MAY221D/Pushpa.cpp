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
        ll a;
        cin >> a;
        map<ll, ll> m;
        for (int i = 0; i < a; i++)
        {
            ll x;
            cin >> x;
            m[x]++;
        }
        ll ans = 0;
        for (auto i : m)
        {
            ll temp = (i.first) + (i.second - 1);
            ans = max(ans, temp);
        }
        auto i = --m.end();
        ans = max(ans, i->first);
        cout << ans << endl;
    }
    return 0;
}