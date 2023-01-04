#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        float a, b, c, d, e, f, g, h;
        float i, j;
        cin >> a >> b >> c >> d;
        e = a * a;
        f = c * c * c;
        g = b * b;
        h = d * d * d;
        i = e / f;
        j = g / h;

        if (i == j)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}