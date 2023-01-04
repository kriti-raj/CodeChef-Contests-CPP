#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int a, b;
        cin >> a >> b;
        if (a / b >= 2)
        {
            cout << b << endl;
        }
        else if (a / b < 2 && a / b > a - b)
        {
            cout << a / b << endl;
        }
        else
        {
            cout << a - b << endl;
        }
    }
    return 0;
}