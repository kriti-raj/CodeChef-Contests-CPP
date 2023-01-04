#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int n;
        cin >> n;
        int a = 0, b = 0, c = 0, x;
        for (int i = 0; i < n; i++)
        {
            cin >> x;

            if (x < 0)
            {
                c += b;
                b++;
            }
            else if (x > 0)
            {
                c += a;
                a++;
            }
        }
        cout << c << endl;
    }
    return 0;
}