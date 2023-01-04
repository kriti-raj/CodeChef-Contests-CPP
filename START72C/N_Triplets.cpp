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
        int a;
        cin >> a;
        int i = 2;
        int flag = 1;
        while ((i * i) <= a)

        {
            if (a % i == 0 && (i != (a / i)))

            {
                flag = 0;
                break;
            }
            i++;
        }
        if (flag)
            cout << -1 << endl;
        else
            cout << 1 << " " << i << " " << a / i << endl;

        // cout << Case # << case_no << : << solution << endl;      //--> Apply Double Apostrophe
        // case_no++;
    }
    return 0;
}