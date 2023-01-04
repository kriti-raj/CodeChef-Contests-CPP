#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll modPower(ll a, ll b, ll M)
{
    ll res = 1;
    while (b)
    {
        if (b & 1)
            res = res * a % M;
        a = a * a % M;
        b >>= 1;
    }
    return res;
}

void findFirstAndLastM(ll N, ll K, ll M)
{
    ll lastM = modPower(N, K, (1LL) * pow(10, M));

    ll firstM;

    double y = (double)K * log10(N * 1.0);

    y = y - (ll)y;

    double temp = pow(10.0, y);

    firstM = temp * (1LL) * pow(10, M - 1);

    // cout << firstM << " " << lastM << endl;
    printf("%2d\t", firstM);
    printf("%2d\n", lastM);
}

int main()
{
    int a, b, x;
    cin >> a >> b >> x;
    ll N = a, K = b, M = x;

    findFirstAndLastM(N, K, M);
    return 0;
}
