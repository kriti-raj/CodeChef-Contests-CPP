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
        int count = 0;
        string str;
        for (int i = 0; i < n; i++)
        {
            cin >> str;
            if (str[0] == 'T')
            {
                count += 4;
            }
            else if (str[0] == 'C')
            {
                count += 6;
            }
            else if (str[0] == 'O')
            {
                count += 8;
            }
            else if (str[0] == 'D')
            {
                count += 12;
            }
            else if (str[0] == 'I')
            {
                count += 20;
            }
        }
        cout << count;
    }
    return 0;
}