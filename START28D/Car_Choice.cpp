#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if (c / a > d / b)
        {
            cout << "1" << endl;
        }
        else if (c / a == d / b)
        {
            cout << "0" << endl;
        }
        else if (c / a < d / b)
        {
            cout << "-1" << endl;
        }
    }
    return 0;
}