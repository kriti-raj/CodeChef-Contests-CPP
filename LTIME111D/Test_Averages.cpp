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
        ll a, b, c;
        cin >> a >> b >> c;
        if ((a + b) / 2 < 35 || (b + c) / 2 < 35 || (a + c) / 2 < 35)
        {
            cout << "Fail" << endl;
        }
        else
        {
            cout << "Pass" << endl;
        }

        // cout << Case # << case_no << : << solution << endl;      //--> Apply Double Apostrophe
        // case_no++;
    }
    return 0;
}