#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        float a, b, c, d, e, f, win;
        cin >> a >> b >> c >> d >> e >> f;
        win = (d + e + f) / 2;
        if (d > e && d > f)
        {
            a = d;
            if ((a + b + c) > win)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else if (e > d && e > f)
        {
            b = e;
            if ((a + b + c) > win)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else if (f > d && f > e)
        {
            c = f;
            if ((a + b + c) > win)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else if (d == e)
        {
            a = d;
            if ((a + b + c) > win)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else if (e == f)
        {
            b = e;
            if ((a + b + c) > win)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else if (d == f)
        {
            c = f;
            if ((a + b + c) > win)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}