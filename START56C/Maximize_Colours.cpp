// Code by Kriti Raj

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define PI 3.14159265358979323846;

/*================================================*/
/*================================================*/

void solve()
{
    int arr[3], sum;
    sum = 0;
    cin >> arr[0] >> arr[1] >> arr[2];
    for (int i = 0; i < 3; ++i)
        if (arr[i] != 0)
        {
            arr[i]--;
            sum++;
        }
    for (int i = 0; i < 3; ++i)
    {
        for (int j = i + 1; j < 3; ++j)
        {
            if (arr[i] > arr[j])
            {
                swap(arr[i], arr[j]);
            }
        }
    }

    if (arr[0] >= 2)
    {
        cout << sum + 3 << endl;
        return;
    }
    if (arr[0] == 1)
    {
        if (arr[0] == 1)
        {
            if ((arr[2] >= 2))
            {
                cout << sum + 2 << endl;
            }
            else
            {
                cout << sum + 1 << endl;
            }
        }
        return;
    }
    
    if ((arr[1] == 0))
    {
        cout << sum << endl;
    }
    else
    {
        cout << sum + 1 << endl;
    }
}

int main()
{
    ll t;
    // ll case_no = 1;
    cin >> t;
    while (t--)
    {
        solve();
        // cout << Case # << case_no << : << solution << endl;      //--> Apply Double Apostrophe
        // case_no++;
    }
    return 0;
}