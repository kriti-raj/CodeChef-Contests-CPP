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
    cin >> t;
    while (t--)
    {
        int a, b, sum(1);
        cin >> a >> b;
        int arr[a];
        bool flag = 0;

        for (int i = 0; i < a; i++)
        {
            cin >> arr[i];
        }

        for (int i = 0; i < a; i++)
        {
            sum = (sum | arr[i]);
        }

        for (int i = 0; i < b; i++)
        {
            sum = (sum | i);
            if (sum == b)
            {
                flag = true;
                break;
            }
        }

        if (flag)
        {
            cout << sum << endl;
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