// Code by Kriti Raj

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define PI 3.14159265358979323846;

/*================================================*/
/*================================================*/

const int N = 1e7 + 10;
ll arr[N];

int main()
{
    int n, m;
    cin >> n >> m;
    while (m--)
    {
        int a, b, k;
        cin >> a >> b >> k;
        arr[a] += k;
        arr[b + 1] -= k;
    }

    for (int i = 1; i <= n; i++)
    {
        arr[i] += arr[i - 1];
    }

    // cout << *max_element(arr, arr + N) << endl;
    ll mx = -1;
    for (int i = 1; i <= n; i++)
    {
        if (mx < arr[i])
        {
            mx = arr[i];
        }
    }
    cout << mx << endl;

    // cout << Case # << case_no << : << solution << endl;      //--> Apply Double Apostrophe
    // case_no++;
    return 0;
}