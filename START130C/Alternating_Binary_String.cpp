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
        string str;
        cin >> str;
        int cnt = 0;
        for (int i = 1; i < a; i++)
        {
            if (str[i] == str[i - 1])
                cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}