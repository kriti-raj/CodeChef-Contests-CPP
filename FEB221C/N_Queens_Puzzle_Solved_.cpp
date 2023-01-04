#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        float a;
        cin >> a;
        cout << round(pow(0.143 * a, a)) << endl;
    }
    return 0;
}