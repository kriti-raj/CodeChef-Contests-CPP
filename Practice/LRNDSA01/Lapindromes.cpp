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
    ll t(1);
    // ll case_no = 1;
    cin >> t;
    while (t--)
    {
        array<int, 26> arr = {0}, arr_2 = {0};
        string str;
        cin >> str;
        int m, a;
        m = str.size() / 2;

        for (int i = 0; i < m; i++)
        {
            a = int(str[i]) - 97;
            arr[a]++;
            // cout << arr[i] << "  -  " << arr_2[i] << endl;
        }

        if (str.size() % 2 != 0)
        {
            m++;
        }

        for (int i = m; i < str.size(); i++)
        {
            a = int(str[i]) - 97;
            arr_2[a]++;
            // cout << arr[i] << "  -  " << arr_2[i] << "  " << str << endl;
        }

        if (arr == arr_2)
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