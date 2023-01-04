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
        int n, x, sum(0);
        cin >> n >> x;
        int arr[n], arr_2[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> arr_2[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i] >= x)
            {
                sum += arr_2[i];
            }
        }
        cout << sum << endl;

        // cout << Case # << case_no << : << solution << endl;      //--> Apply Double Apostrophe
        // case_no++;
    }
    return 0;
}