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
    //	ll case_no = 1;
    cin >> t;
    while (t--)
    {
        ll a, b, c, d;
        cin >> a >> b >> c >> d;
        if (a == b || a == c || a == d)
        {
            cout << "YES" << endl;
        }
        else if (a == b + c || a == b + d || a == d + c || a == b + c + d)
        {
            cout << "YES" << endl;
        }

        else
        {
            cout << "NO" << endl;
        }

        // cout << Case # << case_no << : << solution << endl;      //--> Apply Double Apostrophe
        // case_no++;
    }
    return 0;
}