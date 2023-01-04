// Code by Kriti Raj

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define PI 3.14159265358979323846;
#define rep(i, a, b) for (int i = a; i < b; ++i)

/*================================================*/
/*================================================*/

string solve()
{
    ll n;
    cin >> n;

    vector<int> mask(n);
    rep(i, 0, n)
    {
        int k;
        cin >> k;
        rep(j, 0, k)
        {
            int x;
            cin >> x;
            mask[i] |= (1 << (x - 1));
        }
    }

    rep(i, 0, n)
    {
        rep(j, i + 1, n)
        {
            if ((mask[i] | mask[j]) == 31)
            {
                return "YES";
            }
        }
    }
    return "NO";
}

int main()
{
    ll t;
    // ll case_no = 1;
    cin >> t;
    while (t--)
    {
        cout << solve() << endl;

        // cout << Case # << case_no << : << solution << endl;      //--> Apply Double Apostrophe
        // case_no++;
    }
    return 0;
}