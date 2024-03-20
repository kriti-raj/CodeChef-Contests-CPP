// Code by Kriti Raj
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define PI 3.14159265358979323846
#define pb push_back
#define yesno ? cout << YES : cout << NO; //--> Apply Quotation Mark when use
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));

/*================================================*/
/*================================================*/

int decimalToBinary(int n)
{
    if (n == 0)
        return 0;

    int binary = 0;
    while (n > 0)
    {
        binary = (n % 2) + binary;
        n /= 2;
    }
    // return binary;
    return (binary % 2);
}

int main()
{
    fastread();
    ll t(1);
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        int sum = 0;
        while (a)
        {
            sum += a & 1;
            a >>= 1;
        }

        if (sum % 2 == 0)
            cout << "EVEN" << endl;
        else
            cout << "ODD" << endl;
    }
    return 0;
}