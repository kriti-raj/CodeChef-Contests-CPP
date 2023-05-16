// Code by Kriti Raj
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define PI 3.14159265358979323846;

/*================================================*/
/*================================================*/

// int solution(int a)
// {
// return;
// }

int main()
{
    ll t(1);
    // ll case_no = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        ll p = 0, q = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (arr[i] == 1)
            {
                p += i + 1;
            }
            else
            {
                q += i + 1;
            }
        }
        cout << abs(p - q) << endl;

        // solution(a);

        // cout << Case # << case_no << : << solution << endl;      //--> Apply Double Apostrophe
        // case_no++;
    }
    return 0;
}