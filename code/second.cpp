#include <bits/stdc++.h>
using namespace std;

int min_elimination(int n, int arr[])
{
    int countOdd = 0;

    for (int i = 0; i < n; i++)

        if (arr[i] % 2)
            countOdd++;

    return min(countOdd, n - countOdd);
}

int main()
{
    int t;
    cin >> t;
    {
        int arr[t];
        for (int i = 0; i <= t; i++)
        {
            cin>>arr[i];
        }
        
        int n = sizeof(arr) / sizeof(arr[0]);
    
        cout << min_elimination(n, arr);
    }
    return 0;
}