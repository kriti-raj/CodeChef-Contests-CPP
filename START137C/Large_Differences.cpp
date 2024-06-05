// Code by Kriti Raj
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
#define PI 3.14159265358979323846
#define pb push_back
#define yesno(cond) (cond ? cout << "YES" << endl : cout << "NO" << endl)
#define all(v) (v).begin(), (v).end()
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define F first
#define S second
#define endl '\n'
#define rep(i, a, b) for (int i = a; i < b; ++i)
#define rrep(i, a, b) for (int i = a; i >= b; --i)
#define debug(x) cerr << #x << " = " << x << endl

/*================ Utility Functions ================*/

template <typename T>
void read_vector(vector<T> &vec)
{
    for (auto &x : vec)
        cin >> x;
}

template <typename T>
void print_vector(const vector<T> &vec)
{
    for (const auto &x : vec)
        cout << x << " ";
    cout << endl;
}

template <typename T>
bool is_prime(T n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (T i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}

/*===================================================*/
/*==================== Main Code ====================*/

ll solve(ll n, ll k, vll &a)
{
    ll sum = 0;
    rep(i, 0, n - 1)
        sum += abs(a[i] - a[i + 1]);
    ll maxx = sum;
    rep(i, 0, n)
    {
        if (i > 0)
        {
            ll sumNow = sum - abs(a[i] - a[i - 1]) + abs(1 - a[i - 1]);
            if (i < n - 1)
            {
                sumNow -= abs(a[i] - a[i + 1]);
                sumNow += abs(1 - a[i + 1]);
            }
            maxx = max(maxx, sumNow);
        }

        if (i < n - 1)
        {
            ll sumNow = sum - abs(a[i] - a[i + 1]) + abs(k - a[i + 1]);
            if (i > 0)
            {
                sumNow -= abs(a[i] - a[i - 1]);
                sumNow += abs(k - a[i - 1]);
            }
            maxx = max(maxx, sumNow);
        }
    }
    return maxx;
}

int main()
{
    fastread();
    ll t(1);
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        vll a(n);
        read_vector(a);
        cout << solve(n, k, a) << endl;
    }
    return 0;
}