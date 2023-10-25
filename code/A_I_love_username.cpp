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
        int a, x = 0, minm, maxm;
        cin >> a;
        int arr[a];
        for (int i = 0; i < a; i++)
        {
            cin >> arr[i];
        }
        minm = arr[0];
        maxm = arr[0];
        for (int i = 0; i < a; i++)
        {
            if (arr[i] < minm)
            {
                minm = arr[i];
                x++;
            }
            else if (arr[i] > maxm)
            {
                maxm = arr[i];
                x++;
            }
        }
        cout << x << endl;
    }
    return 0;
}