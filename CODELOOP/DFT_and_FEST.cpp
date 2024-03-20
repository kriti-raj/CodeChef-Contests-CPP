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
        ll n;
        cin >> n;
        ll arr1[n], arr2[n] = {0};
        for (int i = 0; i < n; i++)
        {
            cin >> arr1[i];
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                arr2[i] = arr2[i] + arr1[j] * (pow(2, j * i));
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << arr2[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
