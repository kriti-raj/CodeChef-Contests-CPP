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

string solve(vector<int> &arr)
{
    if (arr[0] != arr[arr.size() - 1])
        return "NO";
    else
    {
        int a = arr[0];
        for (int i = 1; i < arr.size() - 1; i++)
        {
            if (arr[i] < a)
                return "NO";
        }
        return "YES";
    }
}

int main()
{
    fastread();
    ll t(1);
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        vector<int> arr(a);
        for (int i = 0; i < a; i++)
            cin >> arr[i];
        cout << solve(arr) << endl;
    }
    return 0;
}