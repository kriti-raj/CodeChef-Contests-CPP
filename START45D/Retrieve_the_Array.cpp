#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define PI 3.14159265358979323846;

/*================================================*/
/*================================================*/

int main()
{
    ll t;
    cin >> t;
    while (t-- > 0)
    {
        ll n, sum = 0;
        cin >> n;

        vector<ll> a(n), b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> b[i], sum += b[i];
        }

        sum = sum / (n + 1);

        for (int i = 0; i < n; i++)
        {
            a[i] = b[i] - sum;
        }

        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }

        cout << endl;
    }
    return 0;
}