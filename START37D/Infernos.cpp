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
        int a, b, i;
        cin >> a >> b;
        vector<ll> v(a);
        ll z = INT_MIN;
        ll c = 0;
        for (int i = 0; i < a; i++)
        {
            cin >> v[i];
            z = max(z, v[i]);
            c += (v[i] / b);
            if (v[i] % b)
            {
                c++;
            }
        }
        cout << min(c, z) << endl;
    }
    return 0;
}