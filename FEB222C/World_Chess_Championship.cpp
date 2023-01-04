#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int x, countc = 0, countn = 0, countd = 0;
        cin >> x;
        char c[14];
        for (int i = 0; i < 14; i++)
        {
            cin >> c[i];
        }
        for (int j = 0; j < 14; j++)
        {
            if (c[j] == 'C')
            {
                countc++;
            }
            else if (c[j] == 'N')
            {
                countn++;
            }
            else if (c[j] == 'D')
            {
                countd++;
            }
        }
        if (countc == 14)
        {
            cout << 60 * x << endl;
        }
        else
        {
            if ((2 * countc) + countd > (2 * countn) + countd)
            {
                cout << 60 * x << endl;
            }
            else if ((2 * countc) + countd == (2 * countn) + countd)
            {
                cout << 55 * x << endl;
            }
            else if ((2 * countc) + countd < (2 * countn) + countd)
            {
                cout << 40 * x << endl;
            }
        }
    }
    return 0;
}