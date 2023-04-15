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
        int a, b, c, count(0);
        cin >> a >> b>>c;
        // solution(a);
        string str;
        cin>>str;
        for (int i = 0; i < a; i++)
        {
            if (b>0)
            {
                int maxrot = min(25, b);
                for (int j = 0; j < maxrot; j++)
                {
                    str[i]=(str[i]=='z')?'a':str[i]+i;
                    if (str[i]=='b')
                    {
                        break;
                    }
                }
                b-=maxrot;
            }
            else if (c>0)
            {
                int rot = min(25, c);
                for (int j = 0; j < rot; j++)
                {
                    str[i]=(str[i]=='a')?'z':str
                }
                
            }
            
            
        }
        
        

        // cout << Case # << case_no << : << solution << endl;      //--> Apply Double Apostrophe
        // case_no++;
    }
    return 0;
}