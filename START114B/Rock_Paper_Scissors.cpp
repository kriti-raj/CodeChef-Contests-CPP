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
        string str2(a, 'P');

        int totWin = a / 2 + 1;

        for (int i = 0; i < a; i++)
        {
            if (str[i] == 'R')
            {
                totWin--;
            }
        }

        for (int i = a - 1; i >= 0; i--)
        {
            if (totWin-- && (str[i] == 'P' || str[i] == 'S'))
            {
                str2[i] = (str[i] == 'P') ? 'S' : 'R';
            }
        }

        cout << str2 << endl;
    }
    return 0;
}