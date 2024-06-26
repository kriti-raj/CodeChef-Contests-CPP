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
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
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

void solve(const string &s, int arr[])
{
    int n = s.size();
    int l = 0, r = 0;
    rep(i, 1, n)
    {
        if (i <= r)
            arr[i] = min(r - i + 1, arr[i - l]);
        while (i + arr[i] < n && s[arr[i]] == s[i + arr[i]])
            arr[i]++;
        if (i + arr[i] - 1 > r)
            l = i, r = i + arr[i] - 1;
    }
}

void rev(string &s)
{
    int n = s.size();
    rep(i, 0, n / 2)
    {
        char temp = s[i];
        s[i] = s[n - i - 1];
        s[n - i - 1] = temp;
    }
}

int main()
{
    fastread();
    ll t(1);
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        if (n % 2 != 0)
        {
            cout << 0 << endl;
            continue;
        }
        int arr[n] = {0};
        solve(s, arr);
        int st[n];
        int sp = 0;
        rep(i, 0, n)
        {
            if (i <= arr[i])
                st[sp++] = i;
        }
        string revs = s;
        rev(revs);
        int arrrev[n] = {0};
        solve(revs, arrrev);
        unordered_set<int> stt;
        rep(i, 0, n)
        {
            if (i <= arrrev[i])
                stt.insert(n - i - 1);
        }
        int res = 0;

        rep(i, 0, sp)
        {
            int stind = st[i];
            int endind = stind * 2;
            int size = (n - 1) - endind + 1;
            size /= 2;
            int coord = (n - 1) - size;
            if (stt.count(coord))
                res++;
        }
        cout << res << endl;
    }
    return 0;
}