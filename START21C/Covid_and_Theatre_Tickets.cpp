#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int a, b, ans, n, m;
        cin >> a >> b;
        n = a / 2;
        m = b / 2;
        ans = (a - n) * (b - m);
        cout << ans << endl;
    }
    return 0;
}
