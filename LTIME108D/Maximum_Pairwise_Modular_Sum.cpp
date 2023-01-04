#include <bits/stdc++.h>
using namespace std;
#define ll long int
ll mod(ll a, ll b)
{
    if (a % b >= 0)
    {
        return a % b;
    }
    else
    {
        return b + a % b;
    }
}
void getPairsMerge(ll arr[], ll l, ll r, ll mid, vector<pair<ll, ll>> &p)
{
    ll b[l + r + 1], i = l, k = l, j = mid + 1;
    while (i <= mid && j <= r)
    {
        if (arr[i] > arr[j])
        {
            b[k] = arr[j];
            p.push_back({arr[i], arr[j]});
            p.push_back({arr[j], arr[i]});
            p.push_back({arr[j], arr[j]});
            k++;
            j++;
        }
        else
        {
            p.push_back({arr[i], arr[j]});
            p.push_back({arr[j], arr[i]});
            p.push_back({arr[i], arr[i]});
            b[k] = arr[i];
            i++;
            k++;
        }
    }

    while (i <= mid)
    {
        b[k] = arr[i];
        p.push_back({arr[i], arr[i]});
        i++;
        k++;
    }
    while (j <= r)
    {
        b[k] = arr[j];
        p.push_back({arr[j], arr[j]});
        j++;
        k++;
    }

    for (ll x = l; x <= r; x++)
    {
        arr[x] = b[x];
    }
}

void getAllPairs(ll arr[], ll l, ll r, vector<pair<ll, ll>> &p)
{
    if (l < r)
    {
        ll mid = (l + r) / 2;
        getAllPairs(arr, l, mid, p);
        getAllPairs(arr, mid + 1, r, p);
        getPairsMerge(arr, l, r, mid, p);
    }
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll arr[n];
        ll m;
        cin >> m;
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        vector<pair<ll, ll>> p;
        getAllPairs(arr, 0, n - 1, p);
        ll c = 0;
        for (auto it : p)
        {
            if ((it.first + it.second + (mod(it.first - it.second, m))) > c)
            {
                c = (it.first + it.second + (mod(it.first - it.second, m)));
            }
        }
        cout << c << endl;
    }
}