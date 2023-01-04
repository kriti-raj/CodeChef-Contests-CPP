#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        long long int a, b;
        cin >> a >> b;
        if (b % a == 0)
        {
            cout << (b / a) - 1 << endl;
        }
        else
        {
            cout << (b / a) << endl;
        }
    }
    return 0;
}