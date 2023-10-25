// Code by Kriti Raj
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define PI 3.14159265358979323846;

/*================================================*/
/*================================================*/

//    WRONG SOLUTION

int solution(int a, int b)
{
    if (a + b < 4)
    {
        return 0;
    }
    if (a < 4 && b < 4)
    {
        return 1;
    }
    if ((a > 4 && b < 4) || (a < 4 && b > 4))
    {
        return min(a, b);
    }
    if (a >= 4 && b >= 4)
    {
        return (a + b) / 4;
    }
}

int main()
{
    ll t(1);
    // ll case_no = 1;
    cin >> t;
    while (t--)
    {
        int a, b, c, count(0);
        cin >> a >> b;
        cout << solution(a, b) << endl;

        // cout << Case # << case_no << : << solution << endl;      //--> Apply Double Apostrophe
        // case_no++;
    }
    return 0;
}