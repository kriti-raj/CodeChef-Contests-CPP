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
        for (int i = 1; i <= a; i++)
        {
            for (int j = a; j > i; j--)
            {
                cout << " ";
            }
            for (int k = 1; k <= i; k++)
            {
                cout << "*";
            }
            cout << endl;
        }

        // cout << Case # << case_no << : << solution << endl;      //--> Apply Double Apostrophe
        // case_no++;
    }
    return 0;
}