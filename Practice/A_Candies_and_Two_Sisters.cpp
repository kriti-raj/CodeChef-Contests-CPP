// Code by Kriti Raj
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define PI 3.14159265358979323846;

/*================================================*/
/*================================================*/

ll solution(ll a)
{
    if (a % 2 == 0)
    {
        return (a / 2) - 1;
    }
    else
    {
        return a / 2;
    }
}

int main()
{
    ll t(1);
    // ll case_no = 1;
    cin >> t;
    while (t--)
    {
        ll a, b, c, count(0);
        cin >> a;
        cout << solution(a) << endl;

        // cout << Case # << case_no << : << solution << endl;      //--> Apply Double Apostrophe
        // case_no++;
    }
    return 0;
}