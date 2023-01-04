#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define PI 3.14159265358979323846;
int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int n, x;
        cin >> n;
        x = n * 50;
        int a = (x * 0.2);
        int b = (x * 0.3);

        int profit_1 = x - a;
        int profit_2 = profit_1 - a;
        int profit_f = profit_2 -b;
        cout << profit_f << endl;
    }
    return 0;
}