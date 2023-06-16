// Code by Kriti Raj
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define PI 3.14159265358979323846;

/*================================================*/
/*================================================*/

bool solution(char v)
{
    if (v == 'a' or v == 'e' or v == 'i' or v == 'o' or v == 'u')
    {
        return true;
    }
    return false;
}

int main()
{
    ll t(1);
    // ll case_no = 1;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s = "";
        cin >> s;
        ll count(0), sum = 1, lv = 0, fv = 0, check = 0, mod = 1e9 + 7;

        bool flag = false;
        for (int j = 0; j < n; j++)
        {
            if (solution(s[j]))
            {
                count++;
                if (count == 1)
                {
                    fv = j;
                }
                if (k == count && check == 0)
                {
                    check = 1;
                    lv = j;
                    count = 0;
                }
                else if (k == count)
                {

                    count = 0;
                    sum = (sum * (fv - lv)) % mod;
                    lv = j;
                }
            }
        }
        cout << sum << endl;

        // cout << Case # << case_no << : << solution << endl;      //--> Apply Double Apostrophe
        // case_no++;
    }
    return 0;
}