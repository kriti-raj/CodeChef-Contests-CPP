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
        ll a, count = 0;
        cin >> a;
        ll arr[a];
        for (int i = 0; i < a; i++)
        {
            cin >> arr[i];
            if (arr[i] >= 1000)
            {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}