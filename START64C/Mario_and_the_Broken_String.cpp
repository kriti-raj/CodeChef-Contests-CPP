// Code by Kriti Raj

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define PI 3.14159265358979323846;

/*================================================*/
/*================================================*/

int main()
{
    ll t;
    // ll case_no = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string str, str_1, str_2;
        cin >> str;
        for (int i = 0; i < n / 2; i++)
        {
            str_1 += str[i];
        }
        for (int i = n / 2; i < n; i++)
        {
            str_2 += str[i];
        }
        if (str_1 == str_2)
            cout << "YES" << endl;

        else
            cout << "NO" << endl;

        // cout << Case # << case_no << : << solution << endl;      //--> Apply Double Apostrophe
        // case_no++;
    }
    return 0;
}