#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define PI 3.14159265358979323846;
int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int a, b, c, p, q;
        cin >> a;
        int arr[a];
        for (int i = 0; i < a; i++)
        {
            cin >> arr[i];
        }
        int x = distance(arr, max_element(arr, arr + a));

        int r = arr[0] + arr[a - 1];

        if (x - 1 >= 0)
        {
            b = arr[x - 1];
            p = b + arr[x];
            cout << max(p, r) << endl;
        }
        else if (x == 0)

        {
            b = arr[0] + arr[1];
            cout << max(b, r) << endl;
        }

        else if (x + 1 <= a - 1)
        {
            c = arr[x + 1];
            q = c + arr[x];
            cout << max(q, r) << endl;
        }
        else if (x == a - 1)

        {
            c = arr[a - 1] + arr[a - 2];
            cout << max(c, r) << endl;
        }
    }
    return 0;
}