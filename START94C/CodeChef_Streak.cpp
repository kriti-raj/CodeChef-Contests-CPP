// Code by Kriti Raj
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define PI 3.14159265358979323846;

/*================================================*/
/*================================================*/

// int solution(int a)
// {
// return;
// }

int main()
{
    ll t(1);
    // ll case_no = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int o[n], a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> o[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int os(0), as(0), cos(0), cas(0);

        for (int i = 0; i < n; i++)
        {
            if (o[i] > 0)
            {
                cos++;
            }
            else
            {
                cos = 0;
            }

            if (a[i] > 0)
            {
                cas++;
            }
            else
            {
                cas = 0;
            }

            os = max(os, cos);
            as = max(as, cas);
        }

        if (os > as)
        {
            cout << "Om" << endl;
        }
        else if (as > os)
        {
            cout << "Addy" << endl;
        }
        else
        {
            cout << "Draw" << endl;
        }

        // solution(a);

        // cout << Case # << case_no << : << solution << endl;      //--> Apply Double Apostrophe
        // case_no++;
    }
    return 0;
}