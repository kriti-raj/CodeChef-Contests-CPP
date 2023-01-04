#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define PI 3.14159265358979323846;

/*================================================*/
/*================================================*/

int deleteElement(int arr[], int n, int x)
{
    // Search x in array
    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == x)
            break;

    // If x found in array
    if (i < n)
    {
        // reduce size of array and move all
        // elements on space ahead
        n = n - 1;
        for (int j = i; j < n; j++)
            arr[j] = arr[j + 1];
    }

    return n;
}

int main()
{
    ll t;
    //	ll case_no = 1;
    cin >> t;
    while (t--)
    {
        ll a;
        cin >> a;
        int arr[a];
        string v;
        for (int i = 0; i < a; i++)
        {
            cin >> arr[i];
        }

        cin >> v;

        for (int i = 0; i < a; i++)
        {
            if (v[i] == '1')
            {
                arr[i] = 999999;
            }
        }
        sort(arr, arr + a);

        cout << arr[0] << endl;

        // cout << Case # << case_no << : << solution << endl;      //--> Apply Double Apostrophe
        // case_no++;
    }
    return 0;
}