#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define PI 3.14159265358979323846;

/*================================================*/
/*================================================*/

int main()
{
    ll t, x = 1;
    cin >> t;
    while (t--)
    {
        ll N, M, sum = 0;
        cin >> N >> M;
        int C[N];
        for (int i = 0; i < N; i++)
        {
            cin >> C[i];
            sum = sum + C[i];
        }
        cout << "Case #" << x << ": " << sum % M << endl;
        x++;
    }
    return 0;
}