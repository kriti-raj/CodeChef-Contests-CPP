#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        long long int a;
        cin >> a;
        a = a - a / 5;
        cout << a << endl;
    }
    return 0;
}