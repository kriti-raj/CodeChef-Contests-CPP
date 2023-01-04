#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define PI 3.14159265358979323846;
int main()
{
    ll t;
    cin >> t;
    while (t-- > 0)
    {
        ll n;
        cin >> n;
        if (n % 2 == 0)
        {
            cout << "1";
            for (int i = 1; i < n - 1; i++)
            {
                cout << "0";
            }
            cout << "1" << endl;
        }

        else
        {
            for (int i = 0; i < n / 2; i++)
            {
                cout << "0";
            }
            cout << "1";

            for (int i = (n / 2) + 1; i < n; i++)
            {
                cout << "0";
            }
            cout << endl;
        }
    }
    return 0;
}