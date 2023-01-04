#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int a;
        cin >> a;
        if (a % 2 == 0)
        {
            cout << a / 2 << endl;
        }
        else if (a % 2 != 0)
        {
            cout << (a / 2) + 1 << endl;
        }
    }
    return 0;
}