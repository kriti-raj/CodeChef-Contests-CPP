// Code by Kriti Raj
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define PI 3.14159265358979323846

/*================================================*/
/*================================================*/
ll solution(int x, int y, int n)
{
    ll ans = 0;
    ans = n - n % x + y;
    if (ans <= n)
    {
        return ans;
    }
    else
    {
        return (n - n % x - (x - y));
    }
}

int main()
{
    ll t(1);
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        cout << solution(a, b, c) << endl;
    }
    return 0;
}