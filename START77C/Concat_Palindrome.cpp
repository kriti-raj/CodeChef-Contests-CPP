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
        int k, l;
        cin >> k >> l;

        string str1, str2;
        cin >> str1 >> str2;

        int freq[128] = {0};

        if (l > k)
        {
            swap(k, l);
            str1.swap(str2);
        }

        for (int i = 0; i < k; i++)
        {
            freq[str1[i]]++;
        }

        for (int i = 0; i < l; i++)
        {
            freq[str2[i]]--;
        }

        bool flag = true;
        int count = 0;

        for (int i = 0; i < 128; i++)
        {
            if (freq[i] < 0)
            {
                flag = 0;
                break;
            }
            if (freq[i] % 2 == 0)
            {
                continue;
            }
            if (count)
            {
                flag = 0;
            }
            else
            {
                count = 1;
            }
        }

        if (flag)
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