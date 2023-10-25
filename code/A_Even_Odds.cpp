// Code by Kriti Raj
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define PI 3.14159265358979323846
#define pb push_back
#define yesno ? cout << YES : cout << NO; //--> Apply Quotation Mark when use
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));

/*================================================*/
/*================================================*/

int main()
{
    fastread();
    ll t(1);
    // cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        if (b <= a / 2)
        {
            cout << b * 2 - 1;
        }
        else
        {
            if (a % 2 == 0)
                cout << (b - (a / 2)) * 2;
            else
                cout << (b - 1 - (a / 2)) * 2;
        }
    }
    return 0;
}