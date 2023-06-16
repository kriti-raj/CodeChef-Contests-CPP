// Code by Kriti Raj
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define PI 3.14159265358979323846;

/*================================================*/
/*================================================*/

// int solution(int a)
// {
// return;
// }

int main()
{
    ll t(1);
    // ll case_no = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a;
        cin >> a;
        int x = -1;
        int i = 0;
        while (i < n)
        {
            int b;
            cin >> b;
            if ((b & a) == a)
                x &= b;
            i++;
        }
        if (x == a)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        // solution(a);

        // cout << Case # << case_no << : << solution << endl;      //--> Apply Double Apostrophe
        // case_no++;
    }
    return 0;
}