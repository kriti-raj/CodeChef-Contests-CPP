#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a * b > c)
        {
            cout << c / b << endl;
        }
        else if (a * b < c)
        {
            cout << a << endl;
        }
    }
    return 0;
}