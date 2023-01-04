#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int x, y, m, c;
        cin >> x >> y >> m >> c;
        if (y = m * x + c)
        {
            cout << "ON THE LINE" << endl;
        }
        else
        {
            cout << "NOT ON THE LINE" << endl;
        }
    }
    return 0;
}