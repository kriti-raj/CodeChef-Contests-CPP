#include <iostream>
#include <unordered_set>
#include <string>

using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        string S;
        cin >> N >> S;

        unordered_set<string> distinct_strings;
        distinct_strings.insert(S); // Add the original string

        // Perform the circular left shift operation
        for (int i = 0; i < N - 2; i++)
        {
            string new_string = S;
            char temp1 = new_string[i];
            char temp2 = new_string[i + 1];
            char temp3 = new_string[i + 2];
            new_string[i] = temp2;
            new_string[i + 1] = temp3;
            new_string[i + 2] = temp1;
            distinct_strings.insert(new_string);
        }

        cout << distinct_strings.size() << endl;
    }

    return 0;
}