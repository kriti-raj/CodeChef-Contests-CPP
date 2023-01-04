#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int l, a, b;
        cin >> l >> a >> b;
        if (l * l > a * b)
        {
            cout << "Chef" << endl;
        }

        else if (l * l < a * b)
        {
            cout << "Divyam" << endl;
        }

        else if (l * l == a * b)
        {
            cout << "Draw" << endl;
        }
    }
    return 0;
}