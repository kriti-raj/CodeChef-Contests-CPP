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
        for (int i = 0; i < a; i++)
        {
            cout << a - i << " ";
        }
        cout << "\n";

        // cout << Case # << case_no << : << solution << endl;      //--> Apply Double Apostrophe
        // case_no++;
    }
    return 0;
}