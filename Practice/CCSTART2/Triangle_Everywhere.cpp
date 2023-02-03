// Code by Kriti Raj
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define PI 3.14159265358979323846;

/*================================================*/
/*================================================*/

int main()
{
    ll t(1);
    // ll case_no = 1;
    // cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a + b > c && b + c > a && a + c > b)
        {
            if (a == b && b == c && a == c)
            {
                cout << 1;
            }
            else if (a == b || b == c || a == c)
            {
                cout << 2;
            }
            // if (a == b && b == c && a == c)
            else
            {
                cout << 3;
            }
        }
        else
        {
            cout << -1;
        }

        // cout << Case # << case_no << : << solution << endl;      //--> Apply Double Apostrophe
        // case_no++;
    }
    return 0;
}