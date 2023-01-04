#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        long long int n, b = 1;
        cin >> n;
        if (n % 4 == 3 || n % 4 == 2)
        {
            cout << "3" << endl;
        }
        else if (n % 4 == 0)
        {
            cout << 3 + n << endl;
        }
        else if (n % 4 == 1)
        {
            cout << n << endl;
        }
    }
    return 0;
}