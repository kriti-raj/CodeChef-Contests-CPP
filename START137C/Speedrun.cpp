// WRONG ANSWER

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

template <typename T>
struct segTree
{
    T unit;
    T(*f)
    (T obj1, T obj2);
    vector<T> s;
    int n;
    segTree(int n, T (*c)(T obj1, T obj2), T def) : s(2 * n, def), n(n), f(c), unit(def) {}
    void update(int pos, T val)
    {
        for (s[pos += n] = val; pos /= 2;)
            s[pos] = f(s[pos * 2], s[pos * 2 + 1]);
    }
    T query(int b, int e)
    { // query [b, e]
        e++;
        T ra = unit, rb = unit;
        for (b += n, e += n; b < e; b /= 2, e /= 2)
        {
            if (b % 2)
                ra = f(ra, s[b++]);
            if (e % 2)
                rb = f(s[--e], rb);
        }
        return f(ra, rb);
    }
};

/*===================================================*/
/*==================== Main Code ====================*/

int fnn(int a, int b) { return max(a, b); }
int sum(int a, int b) { return (a + b); }

void solve()
{
    int n, k;
    cin >> n >> k;
    vi a(n), b(n);
    read_vector(a);
    read_vector(b);

    int sumH = 0;
    segTree<int> st(n, fnn, 0);
    segTree<int> stt(n, sum, 0);

    rep(i, 0, n)
    {
        sumH += a[i];
        st.update(i, sumH - b[i]);
        stt.update(i, a[i]);
    }

    rep(i, 0, n)
    {
        int gt = upper_bound(all(b), b[i] + 2 * k) - b.begin() - 1;
        int wt = 0;
        if (i)
            wt = max(wt, st.query(0, i - 1));
        if (gt != n - 1)
            wt = max(wt, st.query(gt + 1, n - 1) - stt.query(i, gt));
        if (wt == 0)
        {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
}

int main()
{
    fastread();
    ll t(1);
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}