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
    cin>>t;
    while(t-->0){
    int num;
    cin>>num;
    cout<<factorial(num)<<endl;
    }

    return 0;
}