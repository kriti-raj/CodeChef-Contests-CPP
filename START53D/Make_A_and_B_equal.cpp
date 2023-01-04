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
    //	ll case_no = 1;
    cin >> t;
    while (t--)
    {
        ll a, x = 0, sum = 0;
        cin >> a;

        int arr_1[a], arr_2[a], arr_3[a];
        for (int i = 0; i < a; i++)
        {
            cin >> arr_1[i];
        }

        for (int i = 0; i < a; i++)
        {
            cin >> arr_2[i];
        }

        for (int i = 0; i < a; i++)
        {
            arr_3[i] = arr_1[i] - arr_2[i];
            sum += arr_3[i];
            if (arr_3[i] > 0)
            {
                x += arr_3[i];
            }
        }
        if (sum == 0)
        {
            cout << x << endl;
        }
        else
        {
            cout << "-1" << endl;
        }

        // cout << Case # << case_no << : << solution << endl;      //--> Apply Double Apostrophe
        // case_no++;
    }
    return 0;
}