#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int x, y, z;
        cin >> x >> y;
        z = x - y;
        if (x == y)
        {
            cout << (2 * y) - 1 << endl;
        }
        else if (x > y)
        {
            cout << 2 * y + z << endl;
        }
        else if (y == 0)
        {
            cout << y;
        }
    }
    return 0;
}