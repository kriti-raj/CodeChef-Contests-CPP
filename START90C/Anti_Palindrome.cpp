// Code by Kriti Raj
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define PI 3.14159265358979323846;

/*================================================*/
/*================================================*/

int solution(string str)
{
    int a = str.length();
    unordered_map<char, int> mp;

    for (int i = 0; i < a; i++)
    {
        char c = str[i];
        mp[c]++;
    }

    int odd = 0;
    int even = 0;

    for (pair<const char, int> &pair : mp)
    {
        if (pair.second % 2 != 0)
        {
            odd++;
        }
        else
        {
            even++;
        }
    }

    if (odd > 1)
    {
        return 0;
    }
    else if (odd == 1)
    {
        if (even == 0)
        {
            return 2;
        }
        else
        {
            return 1;
        }
    }
    else
    {
        return 1;
    }
}

int main()
{
    ll t(1);
    // ll case_no = 1;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        string str;
        cin >> str;
        cout << solution(str) << endl;

        // cout << Case # << case_no << : << solution << endl;      //--> Apply Double Apostrophe
        // case_no++;
    }
    return 0;
}