#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int a, b, c, d, e, f, h, i, j;
        cin >> a >> b;
        cin >> c >> d;
        cin >> e >> f;
        h = a + b;
        i = c + d;
        j = e + f;
        if (h >= i && h >= j)
        {
            cout << h << endl;
        }
        else if (i >= h && i >= j)
        {
            cout << i << endl;
        }
        else if (j >= h && j >= i)
        {
            cout << j << endl;
        }
    }
    return 0;
}
