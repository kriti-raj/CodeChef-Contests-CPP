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
        int a;
        cin >> a;
        int arr1[a], arr2[a], zero(0), one(0);
        bool flag = 1;
        for (int i = 0; i < a; i++)
        {
            cin >> arr1[i];
        }
        for (int i = 0; i < a; i++)
        {
            cin >> arr2[i];
        }

        if (arr1[0] != arr2[0] || arr1[a - 1] != arr2[a - 1] || a < 3)
        {
            flag = 0;
        }

        for (int i = 0; i < a; i++)
        {
            if (arr1[i] == 0)
            {
                zero++;
            }
            else
            {
                one++;
            }
        }

        for (int i = 0; i < a; i++)
        {
            if (arr1[i] != arr2[i] && arr1[i] == 0 && one == 0)
            {
                flag = 0;
            }
            if (arr1[i] != arr2[i] && arr1[i] == 1)
            {
                flag = 0;
            }
        }

        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }

        // cout << Case # << case_no << : << solution << endl;      //--> Apply Double Apostrophe
        // case_no++;
    }
    return 0;
}