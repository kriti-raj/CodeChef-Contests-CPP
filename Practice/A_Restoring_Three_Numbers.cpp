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
    // cin >> t;
    while (t--)
    {
        int arr[4];
        for (int i = 0; i < 4; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + 4);
        int a = arr[3] - arr[0];
        cout << a << " "<< arr[1] - a << " " << arr[2] - a;
    }
    return 0;
}