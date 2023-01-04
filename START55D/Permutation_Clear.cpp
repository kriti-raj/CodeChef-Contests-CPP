// Code by Kriti Raj

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define PI 3.14159265358979323846;

/*================================================*/
/*================================================*/

int main()
{
    ll t;
    // ll case_no = 1;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a;

        vector<int> arr(a);
        for (int i = 0; i < a; i++)
        {
            cin >> arr[i];
        }

        cin >> b;
        set<int> s;
        for (int i = 0; i < b; i++)
        {
            int x;
            cin >> x;
            s.insert(x);
        }
        for (int i = 0; i < a; i++)
        {
            if (s.count(arr[i]))
            {
                continue;
            }
            else
            {
                cout << arr[i] << " ";
            }
        }
        cout << endl;

        // cout << Case # << case_no << : << solution << endl;      //--> Apply Double Apostrophe
        // case_no++;
    }
    return 0;
}