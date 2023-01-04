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
        ll a, b, c, d;
        cin >> a >> b >> c >> d;
        if (a == c && b == d)
        {
            cout << "0" << endl;
        }
        else if (a != c && b != d)
        {
            cout << "1" << endl;
        }
        else if (a == c || b == d)
        {
            cout << "2" << endl;
        }
    }
    return 0;
}