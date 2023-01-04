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
        ll a, b, c;
        cin >> a >> b >> c;
        if (b <= a && a % b == 0)
        {
            cout << (a / b) * c << endl;
        }
        else if (b <= a && a % b != 0)
        {
            cout << ((a / b) + 1) * c << endl;
        }
        else
        {
            cout << c << endl;
        }
    }
    return 0;
}