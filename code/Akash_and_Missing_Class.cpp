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
        int i = 0, count = 0;
        if (a <= 6)
        {
            cout << a / 6 << endl;
        }
        else
        {
            while (i <= a)
            {
                count++;
                i += 7;
            }
            cout << count - 1 << endl;
        }
    }
    return 0;
}