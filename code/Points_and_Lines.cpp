#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int a;
        cin >> a;
        int x[a], y[a];
        for (int i = 0; i < a; i++)
        {
            cin >> x[i] >> y[i];
        }
        int countx = 0, county = 0;

        for (int i = 0; i < a; i++)
        {
            for (int j = 1; j < a; j++)
            {
                if (x[i] = x[j])
                {
                    countx++;
                }
            }
        }

        for (int i = 0; i < a; i++)
        {
            for (int j = 1; j < a; j++)
            {
                if (y[i] = y[j])
                {
                    county++;
                }
            }
        }

        cout << countx + county << endl;
    }
    return 0;
}