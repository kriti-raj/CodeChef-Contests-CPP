#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int k, a = 0, s;
        int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
        for (int i = 0; i <= k / 2; i++)
        {
            // s = arr[i] + arr[i - 1];
            s = (i / 2) * (2 * arr[i] + (i - 1) / 2);
            if (k = s + arr[i])
            {
                a = ++a;
            }
        }
        cout << a << endl;
    }
    return 0;
}