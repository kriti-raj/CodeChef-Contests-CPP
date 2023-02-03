// Code by Kriti Raj
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define PI 3.14159265358979323846;

/*================================================*/
/*================================================*/

// const int N = 1e5 + 10;
// ll arr[N];

int main()
{
    ll n, ans = 0;
    cin >> n;

    vector<long long> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    sort(v.begin(), v.end());

    for (int i = 0; i < n; i++)
    {
        ans = max(ans, v[i] * (n - i));
    }

    cout << ans << endl;

    // cout << Case # << case_no << : << solution << endl;      //--> Apply Double Apostrophe
    // case_no++;

    return 0;
}