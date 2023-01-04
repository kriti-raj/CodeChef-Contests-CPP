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
        if (a > 50)
        {
            cout << "A" << endl;
        }
        else if (b > 50)
        {
            cout << "B" << endl;
        }
        else if (c > 50)
        {
            cout << "C" << endl;
        }
        else
        {
            cout << "NOTA" << endl;
        }
    }
    return 0;
}