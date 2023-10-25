// Code by Kriti Raj
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define PI 3.14159265358979323846;

/*================================================*/
/*================================================*/

void solution(int a, vector<int> v1, vector<int> v2)
{
    // for (int i = 0; i < v2.size(); i++)
    // {
    //     v1.push_back(v2[i]);
    // }
    // sort(v1.begin(), v1.end());
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << "  ";
    }
}

int main()
{
    ll t(1);
    // ll case_no = 1;
    // cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        vector<int> v1;
        vector<int> v2;
        for (int i = 0; i < v1.size(); i++)
        {
            int x;
            cin >> x;
            v1.push_back(x);
        }
        for (int i = 0; i < v2.size(); i++)
        {
            int x;
            cin >> x;
            v2.push_back(x);
        }

        solution(a, v1, v2);

        // cout << Case # << case_no << : << solution << endl;      //--> Apply Double Apostrophe
        // case_no++;
    }
    return 0;
}