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
        string str;
        cin >> str;

        int count = 0;
        for (int i = 0; i < a / 2; i++)
        {
            if (str[i] != str[a - i - 1])
            {
                count++;
            }
        }

        if (count <= b)
        {
            if (a % 2 == 1)
            {
                cout << "YES" << endl;
            }
            else if ((b - count) % 2 == 0)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}