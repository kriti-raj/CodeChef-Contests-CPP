#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int a, b, c;
        cin >> a >> b >> c;

        if (c % a == 0 && c % b != 0)
        {
            cout << "CHICKEN" << endl;
        }

        else if (c % a != 0 && c % b == 0)
        {
            cout << "DUCK" << endl;
        }

        else if (c % a != 0 && c % b != 0)
        {
            cout << "NONE" << endl;
        }

        else if (c % a == 0 && c % b == 0)
        {
            cout << "ANY" << endl;
        }
    }
    return 0;
}