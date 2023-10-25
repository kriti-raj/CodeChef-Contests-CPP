// Code by Kriti Raj
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define PI 3.14159265358979323846;

/*================================================*/
/*================================================*/

int H[26] = {0};

int solution(string str, int n)
{
    for (int i = 0; i < n; i++)
    {
        if ((int)str[i] >= 65 && (int)str[i] <= 90)
        {
            H[(int)str[i] - 65]++;
        }
        else
        {
            H[(int)str[i] - 97]++;
        }
    }
    for (int i = 0; i < 26; i++)
    {
        if (H[i] == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    ll t(1);
    // ll case_no = 1;
    // cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;
        if (solution(str, n))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }

        // cout << Case # << case_no << : << solution << endl;      //--> Apply Double Apostrophe
        // case_no++;
    }
    return 0;
}