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
        int a, count = 1;
        cin >> a;
        string str, strnew;
        cin >> str;
        for (int i = 1; i < a; i++)
        {
            if (str[i - 1] == str[i])
            {
                count++;
            }
            else
            {
                if (count % 2 != 0)
                {
                    strnew += str[i - 1];
                }
                else
                {
                    strnew += str[i - 1];
                    strnew += str[i - 1];
                }
                count = 1;
            }
        }
        if (count % 2 != 0)
        {
            strnew += str[a - 1];
        }
        else
        {
            strnew += str[a - 1];
            strnew += str[a - 1];
        }

        cout << strnew << endl;

        // cout << Case # << case_no << : << solution << endl;      //--> Apply Double Apostrophe
        // case_no++;
    }
    return 0;
}
