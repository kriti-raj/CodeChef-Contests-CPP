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
        ll a, b;
        cin >> a >> b;
        if (b >= a)
        {
            cout << b - a << endl;
        }
        else
        {
            cout << "0" << endl;
        }
    }
    return 0;
}