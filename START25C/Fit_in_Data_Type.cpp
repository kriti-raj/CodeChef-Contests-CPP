#include <bits/stdc++.h>
using namespace std;

int mag(int a, int b)
{
    while (b > a)
    {
        b = b - a - 1;
    }
    return b;
}

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int a, b;
        cin >> a >> b;
        if (b > a)
        {
            cout << mag(a, b) << endl;
        }
        else if (a > b)
        {
            cout << b << endl;
        }
        else if (a == b)
        {
            cout << a << endl;
        }
    }
    return 0;
}