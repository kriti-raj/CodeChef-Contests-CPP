// Code by Kriti Raj
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define PI 3.14159265358979323846
#define pb push_back
#define yesno ? cout << YES : cout << NO; //--> Apply Quotation Mark when use
#define fastread() (ios_base::sync_with_stdio(0), cin.tie(NULL));

/*================================================*/
/*================================================*/

int can_alice_win(int A, int B)
{
    string rev_A = to_string(A);
    reverse(rev_A.begin(), rev_A.end());
    int rev_A_num = stoi(rev_A);

    string rev_B = to_string(B);
    reverse(rev_B.begin(), rev_B.end());
    int rev_B_num = stoi(rev_B);

    if (A > B)
        return 1;

    if (rev_A_num > B)
        return 1;

    if (A > rev_B_num)
        return 1;

    if (rev_A_num > rev_B_num)
        return 1;

    return 0;
}

int main()
{
    fastread();
    ll t(1);
    cin >> t;
    while (t--)
    {
        int a, b, c, count(0);
        cin >> a >> b;

        if (can_alice_win(a, b))
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}