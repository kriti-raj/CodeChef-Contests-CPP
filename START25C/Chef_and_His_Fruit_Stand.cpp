#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int a, b, c;
        cin >> a >> b;
        c = a / 2;
        if (c > b)
        {
            cout << b << endl;
        }
        else if (b > c)
        {
            cout << c << endl;
        }
        else if (b == c)
        {
            cout << b << endl;
        }
    }
    return 0;
}