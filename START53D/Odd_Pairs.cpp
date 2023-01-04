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
        ll a;
        cin >> a;
        if (a % 2 == 1)
        {
            cout << (a + 1) * (a / 2) << "\n";
        }
        else if (a == 1)
        {
            cout << 0 << "\n";
        }
        else
        {
            cout << a * a / 2 << "\n";
        }

        // cout << Case # << case_no << : << solution << endl;      //--> Apply Double Apostrophe
        // case_no++;
    }
    return 0;
}