#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int m, p, b;
        cin >> m >> p >> b;
        if (m >= p)
        {
            cout << "PIZZA" << endl;
        }
        else if (m >= b && m <= p)
        {
            cout << "BURGER" << endl;
        }
        else
        {
            cout << "NOTHING" << endl;
        }
    }
    return 0;
}