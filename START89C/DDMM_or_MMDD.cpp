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
    bool flag = 0;
    while (t--)
    {
        string date;
        cin >> date;

        string checkfirst;
        checkfirst += date[3];
        checkfirst += date[4];
        int x = stoi(checkfirst);

        string checklast;
        checklast += date[0];
        checklast += date[1];
        int y = stoi(checklast);

        if (x > 12)
        {
            cout << "MM/DD/YYYY" << endl;
        }

        else if (y > 12)
        {
            cout << "DD/MM/YYYY" << endl;
        }
        else
        {
            cout << "BOTH" << endl;
        }
        // solution(a);

        // cout << Case # << case_no << : << solution << endl;      //--> Apply Double Apostrophe
        // case_no++;
    }
    return 0;
}