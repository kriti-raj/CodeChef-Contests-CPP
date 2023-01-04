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
    ll t;
    // ll case_no = 1;
    cin >> t;
    while (t--)
    {
        int a, x(0), y(0);
        cin >> a;
        int arr[a];
        int max = INT_MAX;
        for (int i = 0; i < a; i++)
        {
            cin >> arr[i];
            if (max > arr[i])
            {
                max = arr[i];
            }
        }

        for (int i = 0; i < a; i++)
        {
            if (arr[i] != max)
            {
                if (arr[i] % max == 0)
                {
                    x++;
                }
                else
                {
                    y = 1;
                    break;
                }
            }
        }
        if (y > 0)
        {
            cout << a << endl;
        }
        else
        {
            cout << x << endl;
        }

        // cout << Case # << case_no << : << solution << endl;      //--> Apply Double Apostrophe
        // case_no++;
    }
    return 0;
}