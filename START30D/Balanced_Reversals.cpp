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

        string str;
        cin >> str;

        int countz = 0, counto = 0;

        for (int i = 0; i < a; i++)
        {
            if (str[i] == '0')
            {
                countz++;
            }
            else if (str[i] == '1')
            {
                counto++;
            }
        }

        for (int j = 0; j < countz; j++)
        {
            cout << "0";
        }

        for (int k = 0; k < counto; k++)
        {
            cout << "1";
        }
        cout << endl;
    }
    return 0;
}