#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int a;
        cin >> a;
        if (a == 2 || a == 3)
        {
            cout << a - 1 << endl;
        }
        else
        {
            cout << a << endl;
        }
    }
    return 0;
}