#include <iostream>
using namespace std;

int main()
{
    int t;
    float n;
    cin >> t >> n;
    if ((t % 5 == 0) && (t + 0.5 <= n))
    {
        cout << n - t - 0.5;
    }
    else
    {
        cout << n;
    }
    return 0;
}
