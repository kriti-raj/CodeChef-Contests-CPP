#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        string s
        cin >> s;

        string t;
        cin >> t;

        for (int i = 0; i < 5; i++)
        {
            if (s[i] == t[i])
            {
                cout << "G";
            }
            else if (s[i] != t[i])
            {
                cout << "B";
            }
        }
        cout << endl;
    }
    return 0;
}