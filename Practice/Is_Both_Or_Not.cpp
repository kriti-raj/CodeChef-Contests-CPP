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
        int a;
        cin >> a;
        if ((a % 5 == 0 && a % 11 != 0) || (a % 5 != 0 && a % 11 == 0))
        {
            cout << "ONE" << endl;
        }
        else if (a % 5 == 0 && a % 11 == 0)
        {
            cout << "BOTH" << endl;
        }
        else
        {
            cout << "NONE" << endl;
        }

        // cout << Case # << case_no << : << solution << endl;      //--> Apply Double Apostrophe
        // case_no++;
    }
    return 0;
}