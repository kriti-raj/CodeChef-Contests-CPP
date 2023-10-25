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
        int a = 4, count = 0;
        ll arr[5];
        for (int i = 0; i < 4; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + a);
        for (int i = 0; i < 4; i++)
        {
            if (arr[i] != arr[i + 1])
            {
                count++;
            }
        }
        cout << a - count;
    }
    return 0;
}
