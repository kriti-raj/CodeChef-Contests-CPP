#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, x = 1;
    cin >> t;
    int a;
    a = t;
    while (t-- > 0)
    {
        int n, m;
        cin >> n >> m;

        int arr[n], sum = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum = sum + arr[i];
        }

        cout << "Case #" << x << ": " << sum % m << endl;
        x++;
    }
    return 0;
}