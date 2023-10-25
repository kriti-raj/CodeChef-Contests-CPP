// Code by Kriti Raj
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define PI 3.14159265358979323846;

/*================================================*/
/*================================================*/

void solution(int a)
{
    for (int i = 1; i <= a; i++)
    {
        if (a == 1)
        {
            cout << "I hate it";
        }
        else if (i == a && a % 2 == 0)
        {
            cout << "I love it";
        }
        else if (i == a && a % 2 != 0)
        {
            cout << "I hate it";
        }
        else if (i % 2 == 0)
        {
            cout << "I love that ";
        }
        else
        {
            cout << "I hate that ";
        }
    }
}

int main()
{
    ll t(1);
    // ll case_no = 1;
    // cin >> t;
    while (t--)
    {
        int a, b, c, count(0);
        cin >> a;
        solution(a);

        // cout << Case # << case_no << : << solution << endl;      //--> Apply Double Apostrophe
        // case_no++;
    }
    return 0;
}