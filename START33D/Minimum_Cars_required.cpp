#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int x;
        cin >> x;
        if (x % 4 == 0)
        {
            cout << x / 4 << endl;
        }
        else
        {
            cout << (x / 4) + 1 << endl;
        }
    }
    return 0;
}