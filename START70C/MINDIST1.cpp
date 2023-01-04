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
        int a;
        cin >> a;
        string str;
        cin >> str;
        vector<int> vec;

        for (int i = 0; i < a; i++)
        {
            if (str[i] == '1')
            {
                vec.push_back(i);
            }
        }

        bool flag = false;
        int last = vec[vec.size() - 1];
        for (int i = 0; i < vec.size(); i++)
        {
            if ((last - vec[i]) % 2 == 1)
            {
                flag = true;
                break;
            }
        }
        if (!flag)
        {
            cout << 2 << endl;
        }
        else
        {
            cout << 1 << endl;
        }

        // cout << Case # << case_no << : << solution << endl;      //--> Apply Double Apostrophe
        // case_no++;
    }
    return 0;
}