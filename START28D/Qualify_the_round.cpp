#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int x, a, b;
        cin >> x >> a >> b;
        if (x <= (2 * b) + a)
        {
            cout << "Qualify" << endl;
        }
        else
            cout << "NotQualify" << endl;
    }
    return 0;
}