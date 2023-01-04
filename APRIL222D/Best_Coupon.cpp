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
        if (a / 10 >= 100)
        {
            cout << a / 10 << endl;
        }
        else if (a / 10 <= 100)
        {
            cout << 100 << endl;
        }
    }
    return 0;
}