// Code by Kriti Raj
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define PI 3.14159265358979323846
#define pb push_back
#define yesno cout << YES : cout << NO; //--> Apply Quotation Mark when use
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));

/*================================================*/
/*================================================*/

int solution(string str1, string str2)
{
    transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
    transform(str2.begin(), str2.end(), str2.begin(), ::tolower);
    if (str1.compare(str2) == 0)
        return 0;
    else if (str1.compare(str2) > 0)
        return 1;
    else if (str1.compare(str2) < 0)
    {
        return -1;
    }
    return 1;
}

int main()
{
    fastread();
    ll t(1);
    // cin >> t;
    while (t--)
    {
        string str1, str2;
        cin >> str1 >> str2;
        cout << solution(str1, str2);
    }
    return 0;
}