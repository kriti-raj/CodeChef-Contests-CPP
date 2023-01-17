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
    ll t(1);
    // ll case_no = 1;
    // cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        bool flag = 0;
        int arr[a];
        for (int i = 0; i < a; i++)
        {
            cin >> arr[i];
            if (arr[i] == b)
            {
                flag = 1;
            }
        }
        if (flag)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << -1 << endl;
        }

        // cout << Case # << case_no << : << solution << endl;      //--> Apply Double Apostrophe
        // case_no++;
    }
    return 0;
}