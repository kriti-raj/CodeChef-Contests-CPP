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
        ll a;
        cin >> a;
        if (a == 0 || (a % 3 == 0))
        {
            cout << "0" << endl;
        }
        else
        {
            cout << (3 - (a % 3)) << endl;
        }
    }
    return 0;
}