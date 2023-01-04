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
    ll t;
    // ll case_no = 1;
    cin >> t;
    while (t--)
    {
        ll a;
        cin >> a;
        bool flag = true;
        ll mn;

        vector<ll> arr(a);
        for (int i = 0; i < a; i++)
        {
            cin >> arr[i];
            if (arr[i] >= 0 && mn > arr[i])
            {
                flag = false;
                mn = arr[i];
            }
        }
        ll x = *min_element(arr.begin(), arr.end());
        ll y = *max_element(arr.begin(), arr.end());

        if (flag)
        {
            cout << pow(x, 2) << " " << pow(y, 2) << endl;
        }
        else
        {
            if (x < 0)
            {
                cout << x * y << " " << max(pow(y, 2), pow(x, 2)) << endl;
            }
            else
            {
                cout << pow(x, 2) << " " << pow(y, 2) << endl;
            }
        }

        // cout << x * x << " " << y * y << endl;

        // cout << Case # << case_no << : << solution << endl;      //--> Apply Double Apostrophe
        // case_no++;
    }
    return 0;
}