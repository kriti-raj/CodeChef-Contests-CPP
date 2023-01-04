// Code by Kriti Raj

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define PI 3.14159265358979323846;

/*================================================*/
/*================================================*/

int gcd(int x, int y)
{
    int r = 0, a, b;
    a = (x > y) ? x : y;
    b = (x < y) ? x : y;

    r = b;
    while (a % b != 0)
    {
        r = a % b;
        a = b;
        b = r;
    }
    return r;
}

int lcm(int x, int y)
{
    int a;
    a = (x > y) ? x : y;
    while (true)
    {
        if (a % x == 0 && a % y == 0)
            return a;
        ++a;
    }
}

int main()
{
    ll t;
    // ll case_no = 1;
    cin >> t;
    while (t--)
    {
        ll a, count(0);
        cin >> a;
        ll arr[a];
        for (int i = 0; i < a; i++)
        {
            cin >> arr[i];
        }
        // for (int i = 0; i <= a; i++)
        // {
        //     if (gcd(arr[i], arr[i - 1]) == lcm(arr[i], arr[i - 1]))
        //     {
        //         count++;
        //     }
        // }
        map<ll, ll>freq;
        for (int i = 0; i < a; i++)
        {
            freq
        }
        
        cout << count << endl;

        // cout << Case # << case_no << : << solution << endl;      //--> Apply Double Apostrophe
        // case_no++;
    }
    return 0;
}