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
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
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

const ll MAX_N = 1000002;
vll spf(MAX_N + 1, 0);
vll vec;

void fn()
{
    spf[1] = 1;
    for (ll i = 2; i < MAX_N; ++i)
    {
        if (spf[i] == 0)
        {
            spf[i] = i;
            vec.push_back(i);
            for (long long j = (long long)i * i; j < MAX_N; j += i)
            {
                if (spf[j] == 0)
                {
                    spf[j] = i;
                }
            }
        }
    }
}

void solve(ll k)
{
    long long res = 0;
    for (ll prime : vec)
    {
        if (prime > k || prime > spf[k])
        {
            break;
        }
        res += (long long)prime * k;
    }
    cout << res << "\n";
}

int main()
{
    fastread();
    fn();
    ll t(1);
    cin >> t;
    while (t--)
    {
        ll a, count = 0;
        cin >> a;
        solve(a);
    }
    return 0;
}