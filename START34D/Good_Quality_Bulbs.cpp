#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int a, b, sum = 0;
        cin >> a >> b;
        int arr[a];
        for (int i = 0; i < a - 1; i++)
        {
            cin >> arr[i];
            sum = sum + arr[i];
        }
        if (a * b >= sum)
        {
            cout << (a * b) - sum << endl;
        }
        else
        {
            cout << "0" << endl;
        }
        }
    return 0;
}