#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int n, count = 0;
        cin >> n;
        int day[n];
        for (int i = 0; i < n; i++)
        {
            cin >> day[i];
            if (day[i] != 6 && day[i] != 7 && day[i] != 13 && day[i] != 14 && day[i] != 20 && day[i] != 21 && day[i] != 27 && day[i] != 28)
            {
                count++;
            }
        }
        cout << (count + 8) << endl;
    }
    return 0;
}