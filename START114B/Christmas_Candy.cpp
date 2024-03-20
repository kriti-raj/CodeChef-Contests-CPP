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
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        int arr[a];
        for (int i = 0; i < a; i++)
        {
            cin >> arr[i];
        }
        int cnt = 0;
        int arr2[a] = {0};
        int x = arr[0];
        for (int i = 1; i < a; ++i)
        {
            if (arr[i] < x)
            {
                arr2[i] = 1;
            }
            x = max(arr[i], x);
        }
        for (int i = 0; i < a; ++i)
        {
            if (arr2[i] == 1)
            {
                cnt++;
            }
        }
        cout << cnt << "\n";
    }
    return 0;
}