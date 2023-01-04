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
    ll t;
    // ll case_no = 1;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        if (a < b)
        {
            cout << "REPAIR" << endl;
        }
        else if (a > b)
        {
            cout << "NEW PHONE" << endl;
        }
        else
        {
            cout << "ANY" << endl;
        }

        // cout << Case # << case_no << : << solution << endl;      //--> Apply Double Apostrophe
        // case_no++;
    }
    return 0;
}