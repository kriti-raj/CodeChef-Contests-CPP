// WRONG SOLUTION
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

int main()
{
    fastread();
    ll t(1);
    cin >> t;
    while (t--)
    {
        ll n, c;
        cin >> n >> c;
        int arr1[n];
        ll arr2[n] = {0};
        ll sum = 0;
        rep(i, 0, n)
        {
            cin >> arr1[i];
            sum += arr1[i];
        }

        rep(i, 0, n)
            arr2[i] = arr1[i] * (sum - arr1[i]);
        vector<pair<int, int>> vec;
        rep(i, 0, n)
        {
            vec.push_back({arr2[i], i});
        }
        sort(vec.begin(), vec.end());
        ll p = 0;
        ll sum1 = sum;
        rep(i, 1, n)
        {
            if ((arr1[vec[i].second]) * sum1 <= c)
            {
                c -= (vec[i].second) * sum1;
                p++;
                sum1 -= arr1[vec[i].second];
            }
        }
        cout << n - p << endl;
    }
    return 0;
}