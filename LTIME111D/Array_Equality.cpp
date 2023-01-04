#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define PI 3.14159265358979323846;

/*================================================*/
/*================================================*/

int findRepeat(int arr[], int n)
{

    int count = 0;
    int value = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            count++;
            value = arr[i];
        }
    }
    count++;
    return count;
}

int main()
{
    ll t;
    //	ll case_no = 1;
    cin >> t;
    while (t--)
    {
        ll n, a, maxfreq = 0, m;
        cin >> n;
        map<ll, ll> freq;
        for (ll i = 0; i < n; i++)
        {
            cin >> a;
            freq[a]++;
            maxfreq = max(maxfreq, freq[a]);
        }
        m = n / 2;
        if (n % 2)
        {
            m++;
        }

        if (maxfreq <= m)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }

        // int x = findRepeat(arr, a);
        // if (a / 2 >= x)
        // {
        //     cout << "Yes" << endl;
        // }
        // else
        // {
        //     cout << "No" << endl;
        // }

        // cout << Case # << case_no << : << solution << endl;      //--> Apply Double Apostrophe
        // case_no++;
    }
    return 0;
}