#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int num;
        cin >> num;
        int age[num], count = 0;
        for (int i = 0; i < num; i++)
        {
            cin >> age[i];
            if (age[i] >= 10 && age[i] <= 60)
            {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}