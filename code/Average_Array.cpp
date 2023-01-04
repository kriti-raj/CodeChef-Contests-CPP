#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int n, x, sum, z;
        cin >> n >> x;
        sum = n * x;
        z = sum / n;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                cout << z - i << " ";
            }
            if (i % 2 != 0)
            {
                cout << z + i + i << " ";
            }
        }
        cout << endl;
    }
    return 0;
}