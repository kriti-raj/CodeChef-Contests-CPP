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
        int count = 0;
        for (int i = 0; i < a; i++)
        {
            if (str[i] == str[i + 1])
            {
                count += 1;
                i++;
            }
            else
            {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}