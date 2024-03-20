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
        int count = 0;
        int a, b, c;
        vector<int> vec(n);
        for (int i = 0; i < n; i++)
            cin >> vec[i];

        for (int i = 1; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                a = vec[i] - vec[j];
                b = vec[i] + vec[j];
                c = vec[i] * vec[j];

                if (a + c == b * 2)
                {
                    count++;
                }
            }
        }

        cout << count << endl;
    }
    return 0;
}