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
        string str;
        cin >> str;
        int res = INT_MAX;
        for (int i = 0; i < 26; i++)
        {
            char ch = 'a';
            ch += i;
            int cnt = 0;
            for (int i = 0; i < str.size(); i++)
            {
                if (str[i] == ch)
                {
                    cnt++;
                }
            }
            if (cnt == 0)
                continue;

            int l = 0, r = cnt - 1, count = 0;

            for (int i = l; i <= r; i++)
            {
                if (str[i] != ch)
                {
                    count++;
                }
            }

            int ans = count;

            while (r <= str.size() - 1)
            {
                ans = min(ans, count);
                if (str[l] != ch)
                {
                    count--;
                }

                l++;
                r++;

                if (r <= str.size() - 1 && str[r] != ch)
                {
                    count++;
                }
            }

            res = min(ans, res);
        }
        cout << res << endl;
    }
    return 0;
}