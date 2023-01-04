#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int a, b;
        cin >> a >> b;
        if (a > b)
        {
            cout << "A" << endl;
        }
        else if (b > a)
        {
            cout << "B" << endl;
        }
    }
    return 0;
}