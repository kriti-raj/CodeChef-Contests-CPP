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
        float a;
        cin >> a;
        cout << double((a + 1) * 343) / 1000 << endl;
        // printf(%d, ((a + 1) * 343) / 1000);
    }
    return 0;
}