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
        int n, q;
        cin >> n >> q;
        int a[n + 10];
        int forward[n + 10];
        int backward[n + 10];
        forward[0] = backward[n + 1] = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        for (int i = 1; i <= n; i++)
        {
            forward[i] = __gcd(forward[i - 1], a[i]);
        }
        for (int i = n; i >= 1; i--)
        {
            backward[i] = __gcd(backward[i + 1], a[i]);
        }

        while (q--)
        {
            int l, r;
            cin >> l >> r;
            cout << __gcd(forward[l - 1], backward[r + 1]) << endl;
        }

        // cout << Case # << case_no << : << solution << endl;      //--> Apply Double Apostrophe
        // case_no++;
    }
    return 0;
}