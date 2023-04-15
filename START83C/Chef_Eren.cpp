// Code by Kriti Raj
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define PI 3.14159265358979323846;

/*================================================*/
/*================================================*/

int solution(int a, int b, int c)
{
}

int main()
{
    ll t(1);
    // ll case_no = 1;
    cin >> t;
    while (t--)
    {
        int a, b, c, count(0);
        cin >> a >> b >> c;
        if (a % 2 == 0)
        {
            cout << (b * (a / 2)) + (c * (a / 2)) << endl;
        }

        else
        {
            cout << (b * (a / 2)) + (c * (a / 2)) + c << endl;
        }

        // cout << Case # << case_no << : << solution << endl;      //--> Apply Double Apostrophe
        // case_no++;
    }
    return 0;
}