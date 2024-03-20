// Code by Kriti Raj
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define PI 3.14159265358979323846
#define pb push_back
#define yesno ? cout << YES : cout << NO; //--> Apply Quotation Mark when use
// #define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));

/*================================================*/
/*================================================*/

int main()
{
    // fastread();
    ll t(1);
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        if (m > n - 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}