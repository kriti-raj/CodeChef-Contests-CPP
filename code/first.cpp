#include <bits/stdc++.h>
using namespace std;

int factorial(int number)
{

    if (number == 1 || number == 0)
    {
        return 1;
    }
    else
    {
        return (number * factorial(number - 1));
    }
}

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int n, p;
        cin >> n;
        p = factorial(n);
        cout << p << endl;
    }
    return 0;
}