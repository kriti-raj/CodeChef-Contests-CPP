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
        // if (a % 2 == 0)
        // {
        //     a = a / 2;
        // }
        // else if (a % 7 == 0)
        // {
        //     a = a / 7;
        // }

        // if (a == 1)
        // {
        //     cout << "YES" << endl;
        // }
        // else
        // {
        //     cout << "NO" << endl;
        // }
        bool flag = false;
        while (a >= 0)
        {
            if (a % 7 != 0)
            {
                a = a - 2;
            }
            if (a % 7 == 0)
            {
                flag = true;
                break;
            }
        }
        if (flag == true)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}