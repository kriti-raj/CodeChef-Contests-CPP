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
    cin >> t;
    while (t--)
    {
        int a, l(0);
        string nat;
        cin >> a >> nat;
        while (a--)
        {
            string str;
            cin >> str;
            if (str == "CONTEST_WON")
            {
                int r;
                cin >> r;
                l += 300;
                if (r <= 20)
                {
                    l += 20 - r;
                }
            }
            else if (str == "TOP_CONTRIBUTOR")
            {
                l += 300;
            }
            else if (str == "BUG_FOUND")
            {
                int s;
                cin >> s;
                if (s >= 50 && s <= 1000)
                {
                    l += s;
                }
            }
            else if (str == "CONTEST_HOSTED")
            {
                l += 50;
            }
            else
            {
                assert(false);
            }
        }
        if (nat == "INDIAN")
        {
            cout << l / 200 << endl;
        }
        else
        {
            cout << l / 400 << endl;
        }

        // cout << Case # << case_no << : << solution << endl;      //--> Apply Double Apostrophe
        // case_no++;
    }
    return 0;
}