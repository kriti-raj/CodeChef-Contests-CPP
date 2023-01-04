#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int a;
        cin >> a;
        int arr[a];
        for (int i = 0; i < a; i++)
        {
            cin >> arr[i];
        }

        bool b = true;
        sort(arr, arr + a);
        for (int i = 1; i < a - 1; i++)
        {
            int x = arr[i] - arr[i - 1];
            int y = arr[i + 1] - arr[i];
            if (2 * x != y && x != y * 2)
            {
                b = false;
                break;
            }
        }
        if (b)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}