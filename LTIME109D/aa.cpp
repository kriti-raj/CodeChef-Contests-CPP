#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define PI 3.14159265358979323846;
int main()
{
    ll t;
    cin >> t;
    while (t-- > 0)
    {
        ll a, b, x, y;
        cin >> a >> b;
        int a, b, x = 0, y = 0;
        cin >> a >> b;
        if (a <= 10)
            x = 1;
        else if (a > 10 && a <= 20)
            x = 2;
        else if (a > 20 && a <= 30)
            x = 3;
        else if (a > 30 && a <= 40)
            x = 4;
        else if (a > 40 && a <= 50)
            x = 5;
        else if (a > 50 && a <= 60)
            x = 6;
        else if (a > 60 && a <= 70)
            x = 7;
        else if (a > 70 && a <= 80)
            x = 8;
        else if (a > 80 && a <= 90)
            x = 9;
        else if (a > 90 && a <= 100)
            x = 10;

        if (b <= 10)
            y = 1;
        else if (b > 10 && b <= 20)
            y = 2;
        else if (b > 20 && b <= 30)
            y = 3;
        else if (b > 30 && b <= 40)
            y = 4;
        else if (b > 40 && b <= 50)
            y = 5;
        else if (b > 50 && b <= 60)
            y = 6;
        else if (b > 60 && b <= 70)
            y = 7;
        else if (b > 70 && b <= 80)
            y = 8;
        else if (b > 80 && b <= 90)
            y = 9;
        else if (b > 90 && b <= 100)
            y = 10;
        cout << abs(x - y) << endl;
    }
    return 0;
}