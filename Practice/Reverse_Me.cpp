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
        int a;
        cin >> a;
        int arr[a];
        for (int i = 1; i <= a; i++)
        {
            cin >> arr[i];
        }
        for (int i = a; i >= 1; i--)
        {
            cout << arr[i] << " ";
        }

        // cout << Case # << case_no << : << solution << endl;      //--> Apply Double Apostrophe
        // case_no++;
    }
    return 0;
}