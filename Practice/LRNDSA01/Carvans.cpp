// Code by Kriti Raj
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define PI 3.14159265358979323846;

/*================================================*/
/*================================================*/

const int N = 1e5 + 10;
int arr[N];

int main()
{
    ll t(1);
    // ll case_no = 1;
    cin >> t;
    while (t--)
    {
        ll a, same = 0;
        cin >> a;
        for (int i = 0; i < a; i++)
        {
            cin >> arr[i];
        }

        int minimum = arr[0];

        for (int i = 0; i < a; i++)
        {

            if (minimum >= arr[i])
            {
                same++;
            }
            minimum = min(minimum, arr[i]);
        }
        cout << same << endl;
        // cout << Case # << case_no << : << solution << endl;      //--> Apply Double Apostrophe
        // case_no++;
    }
    return 0;
}