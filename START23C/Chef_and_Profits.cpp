#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int a, b, c, x, y;
        cin >> a >> b >> c;
        x = a * b;
        y = a * c;
        cout << y - x << endl;
    }
    return 0;
}