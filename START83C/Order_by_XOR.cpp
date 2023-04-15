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
    for (int i = 0; i < 16; i++)
    {
        if ((a ^ i) < (b ^ i) && (b ^ i) < (c ^ i))
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    ll t(1);
    // ll case_no = 1;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        cout << solution(a, b, c) << endl;

        // cout << Case # << case_no << : << solution << endl;      //--> Apply Double Apostrophe
        // case_no++;
    }
    return 0;
}