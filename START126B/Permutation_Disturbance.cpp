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
        int n;
        cin >> n;
        int res = 0;
        vector<int> vec(n);
        for (int i = 0; i < n; i++)
            cin >> vec[i];

        for (int i = 0; i < vec.size(); i++)
        {
            if (vec[i] == i + 1)
            {
                if (i < vec.size() - 1 && vec[i + 1] == i + 2)
                {
                    swap(vec[i], vec[i + 1]);
                    res++;
                    i++;
                }
                else
                    res++;
            }
        }
        cout << res << endl;
    }
    return 0;
}