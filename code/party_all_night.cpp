#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int marks;
        cin >> marks;
        if (marks >= 12)
        {
            cout << "PARTY ALL NIGHT!" << endl;
        }
        else
        {
            cout << "STUDY ALL NIGHT!" << endl;
        }
    }
    return 0;
}