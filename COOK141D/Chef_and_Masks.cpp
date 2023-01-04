#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int a, b;
        cin >> a >> b;
        if (100 * a >= 10 * b)
        {
            cout << "CLOTH" << endl;
        }
        
        else if (100 * a < 10 * b)
        {
            cout << "DISPOSABLE" << endl;
        }
    }
    return 0;
}