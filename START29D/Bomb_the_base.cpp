#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int n, k, j=0;
        cin >> n >> k;
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];

            if (arr[i] < k)
            {
                j = i + 1;
            }
        }
        cout << j << endl;
    }
    return 0;
}