// Code by Kriti Raj
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define PI 3.14159265358979323846;

/*================================================*/
/*================================================*/

// int solution(int a)
// {
// return;
// }

int main()
{
    ll t(1);
    // ll case_no = 1;
    cin >> t;
    while (t--)
    {
        int prof[4];
        for (int i = 0; i < 4; i++)
        {
            cin >> prof[i];
        }

        sort(prof, prof + 4);
        if (prof[0] + prof[1] + prof[2] < prof[3])
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }

        // solution(a);

        // cout << Case # << case_no << : << solution << endl;      //--> Apply Double Apostrophe
        // case_no++;
    }
    return 0;
}