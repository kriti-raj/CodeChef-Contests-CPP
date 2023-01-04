#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int c = 0;
    for (int i = 1; i <= n; i++)
    {
        int a;
        cin >> a;
        if (a % k == 0)
        {
            c++;
        }
    }
    cout << c << endl;
    return 0;
}