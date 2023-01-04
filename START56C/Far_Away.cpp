// Code by Kriti Raj

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define PI 3.14159265358979323846;

/*================================================*/
/*================================================*/

void solution()
{
    ll a, b, sum(0);
    cin >> a >> b;
    ll arr[a];
    for (int i = 0; i < a; ++i)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < a; ++i)
    {
        sum += max(abs(arr[i] - 1), abs(arr[i] - b));
    }
    cout << sum << endl;
}

int main()
{
    ll t;
    // ll case_no = 1;
    cin >> t;
    while (t--)
        solution();
    // cout << Case # << case_no << : << solution << endl;      //--> Apply Double Apostrophe
    // case_no++;

    return 0;
}
