// Code by Kriti Raj
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define PI 3.14159265358979323846;

/*================================================*/
/*================================================*/

// int solution(int a)
// {
// return;
// }

int main()
{
    ll t(1);
    // ll case_no = 1;
    cin >> t;
    while (t--)
    {
        ll a;
        cin >> a;
        ll arr[a];
        for (int i = 0; i < a; i++)
        {
            cin >> arr[i];
        }
        unordered_map<int, int> mp;
        for (int i = 0; i < a; i++)
        {
            mp[arr[i]]++;
        }
        if (mp.size() == a)
        {
            cout << (a * (a - 1)) / 2 << endl;
        }
        else
        {
            ll ans(0), sum(0), x;
            for (int i = 0; i < a; i++)
            {
                x = a - mp[arr[i]] - sum;
                ans += x;
                mp[arr[i]]--;
                sum++;
            }
            cout << ans << endl;
        }

        // cout << Case # << case_no << : << solution << endl;      //--> Apply Double Apostrophe
        // case_no++;
    }
    return 0;
}