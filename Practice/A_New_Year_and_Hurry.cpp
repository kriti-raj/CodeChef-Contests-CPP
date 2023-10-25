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
    int x = 240 - b;
    int count = 0;
    for (int i = 1; i <= a; i++)
    {
        if (x / (5 * i) > 0)
        {
            count++;
            x -= (5 * i);
        }
    }
    return count;
}

int main()
{
    ll t(1);
    // ll case_no = 1;
    // cin >> t;
    while (t--)
    {
        int a, b, c, count(0);
        cin >> a >> b;
        cout << solution(a, b);

        // cout << Case # << case_no << : << solution << endl;      //--> Apply Double Apostrophe
        // case_no++;
    }
    return 0;
}