// Code by Kriti Raj
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define PI 3.14159265358979323846;

/*================================================*/
/*================================================*/

string solution(string str, int n)
{
    int s = str.size();
    for (int i = 0; i < s - 1; i++)
    {
        if (str[i] == 'B' && str[i + 1] == 'G')
        {
            while (n--)
            {
                swap(str[i], str[i + 1]);
            }
        }
    }
    return str;
}

int main()
{
    ll t(1);
    // ll case_no = 1;
    // cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        string str;
        cin >> str;
        cout << solution(str, b);

        // cout << Case # << case_no << : << solution << endl;      //--> Apply Double Apostrophe
        // case_no++;
    }
    return 0;
}