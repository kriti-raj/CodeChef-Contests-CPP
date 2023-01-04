#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int x, y;
        cin >> x >> y;
        if (x < y)
        {
            cout << "FIRST" << endl;
        }

        else if (x > y)
        {
            cout << "SECOND" << endl;
        }
        else if (x == y)
        {
            cout << "ANY" << endl;
        }
    }
    return 0;
}