// Code by Kriti Raj
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define PI 3.14159265358979323846;

/*================================================*/
/*================================================*/

int solution(int a, int b)
{
    if (a > b)
    {
        return solution(a, 2 * b);
    }
    if (a == b)
    {
        return 1;
    }
    if (a < b)
    {
        return 0;
    }
}

int main()
{
    ll t(1);
    // ll case_no = 1;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;

        if (a > b)
        {
            if (a % 2 == 1)
            {
                cout << "NO" << endl;
            }

            else
            {
                int x = __gcd(a, b);
                if (solution(a, x))
                {
                    cout << "YES" << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
        }

        else if (a < b)
        {
            cout << "NO" << endl;
        }

        else
        {
            cout << "YES" << endl;
        }

        // cout << Case # << case_no << : << solution << endl;      //--> Apply Double Apostrophe
        // case_no++;
    }
    return 0;
}