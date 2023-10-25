// Code by Kriti Raj
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define PI 3.14159265358979323846;

/*================================================*/
/*================================================*/

void solution(string str)
{
    vector<char> v;
    int ss = str.size();
    for (int i = 0; i < ss; i += 2)
    {
        v.push_back(str[i]);
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i];
        if (i + 1 < v.size())
        {
            cout << "+";
        }
    }
}

int main()
{
    ll t(1);
    // ll case_no = 1;
    // cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        solution(str);

        // cout << Case # << case_no << : << solution << endl;      //--> Apply Double Apostrophe
        // case_no++;
    }
    return 0;
}