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
        int arr[a];
        for (int i = 0; i < a; i++)
        {
            cin >> arr[i];
        }
        int min = *min_element(arr, arr + a);
        int count(0), counteq(0);
        for (int i = 0; i < a; i++)
        {
            if (arr[i] > min)
            {
                count++;
            }
            else if (arr[i] == min)
            {
                counteq++;
            }
        }
        if (count == 0)
        {
            cout << 0 << endl;
        }
        else if (count >= counteq)
        {
            cout << count << endl;
        }
        else
        {
            cout << counteq << endl;
        }

        // cout << Case # << case_no << : << solution << endl;      //--> Apply Double Apostrophe
        // case_no++;
    }
    return 0;
}