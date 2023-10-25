// Code by Kriti Raj
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define PI 3.14159265358979323846
#define pb push_back
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define yesno cout << "YES\n" : cout << "NO\n";

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
        string str, ans = "Timru";
        cin >> a >> str;
        sort(str.begin(), str.end());
        (str == ans) ? yesno;
    }
    return 0;
}