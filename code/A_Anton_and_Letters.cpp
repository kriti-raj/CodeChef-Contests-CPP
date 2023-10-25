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
        string str;
        getline(cin, str);
        set<char> a;
        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] != '{' && str[i] != '}' && str[i] != ',' && str[i] != ' ')
            {
                a.insert(str[i]);
            }
        }
        cout << a.size();
    }
    return 0;
}