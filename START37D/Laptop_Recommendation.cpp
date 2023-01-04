#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define PI 3.14159265358979323846;
int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int a, count = 1, max_count = 0;
        cin >> a;
        vector<int> arr(11);
        ll temp;
        for (int i = 0; i < a; i++)
        {
            cin >> temp;
            arr[temp]++;
        }
        vector<int> arr2 = arr;
        sort(arr2.begin(), arr2.end());
        if (arr2[10] > arr2[9])
        {

            for (int i = 0; i < 11; i++)
            {
                if (arr[i] == arr2[10])
                {
                    cout << i << endl;
                }
            }
        }

        else
        {
            cout << "CONFUSED" << endl;
        }
    }

    return 0;
}