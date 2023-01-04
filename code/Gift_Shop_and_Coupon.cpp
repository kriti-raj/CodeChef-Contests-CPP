#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int a, b, x, cost = 0, count = 0;
        cin >> a >> b;
        int arr[a];
        int n = sizeof(arr) / sizeof(arr[0]);
        for (int i = 0; i < a; i++)
        {
            cin >> arr[i];
        }
        x = *max_element(arr, arr + n);
        for (int i = 0; i < b; i++)
        {
            if (cost <= b)
            {
                cost = cost + x / 2 + arr[i];
                count++;
            }
        }
        cout << count << endl;
    }

    return 0;
}