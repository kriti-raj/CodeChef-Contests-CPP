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
        int a, k(1);
        cin >> a;
        for (int i = 0; i < a; i++)
        {
            if (i % 2 != 0)
            {
                for (int j = 5; j > 0; j--)
                {
                    cout << k + j << ' ';
                }
                k += 6;
            }
            else
            {
                for (int j = 0; j < 5; j++)
                {
                    cout << k + j << ' ';
                }
                k += 4;
            }
            cout << endl;
        }
        // cout << Case # << case_no << : << solution << endl;      //--> Apply Double Apostrophe
        // case_no++;
    }
    return 0;
}