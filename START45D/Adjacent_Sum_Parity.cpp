#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define PI 3.14159265358979323846;

/*================================================*/
/*================================================*/

int xorOfArray(int arr[], int n)
{
    int xor_arr = 0;
    for (int i = 0; i < n; i++)
    {
        xor_arr = xor_arr ^ arr[i];
    }
    return xor_arr;
}

int main()
{
    ll t;
    cin >> t;
    while (t-- > 0)
    {
        ll n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int x = xorOfArray(arr, n);
        if (x == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}