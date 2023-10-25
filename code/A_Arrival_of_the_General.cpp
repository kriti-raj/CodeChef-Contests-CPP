// Code by Kriti Raj
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define PI 3.14159265358979323846
#define pb push_back
#define yesno ? cout << YES : cout << NO; //--> Apply Quotation Mark when use
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));

/*================================================*/
/*================================================*/

int main()
{
    fastread();
    ll t(1);
    // cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int maxm = arr[0], minm = arr[0], x = 0, y = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > maxm)
            {
                maxm = arr[i];
                x = i;
            }
            if (arr[i] <= minm)
            {
                minm = arr[i];
                y = i;
            }
        }

        cout << x + (n - 1 - y) - (y < x ? 1 : 0) << endl;
    }
    return 0;
}