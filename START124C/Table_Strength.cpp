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

        vector<int> vec(a);
        for (int i = 0; i < a; ++i)
        {
            cin >> vec[i];
        }

        sort(vec.begin(), vec.end());

        int mxwt = 0;
        for (int i = a - 1; i >= 0; i--)
        {
            int totwt = vec[i] * (a - i);
            mxwt = max(mxwt, totwt);
        }

        cout << mxwt << endl;
    }
    return 0;
}
