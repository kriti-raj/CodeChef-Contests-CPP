// Code by Kriti Raj
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define PI 3.14159265358979323846;

/*================================================*/
/*================================================*/

const int N = 1e5 + 10;

int main()
{
    ll t(1);
    // ll case_no = 1;
    cin >> t;
    while (t--)
    {
        int n, k, count(0);
        cin >> n >> k;
        int x = -1;
        array<int, N> arr = {0}, arr_2 = {0};
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
            if (arr[i] == i)
            {
                arr[i] = 0;
            }
        }

        for (int i = 1; i <= n; i++)
        {
            arr_2[arr[i]]++;
            // cout << arr_2[i];
        }

        for (int i = 1; i <= n; i++)
        {
            if (arr_2[i] > x)
            {
                x = arr_2[i];
            }
        }
        cout << x << endl;

        // cout << Case # << case_no << : << solution << endl;      //--> Apply Double Apostrophe
        // case_no++;
    }
    return 0;
}