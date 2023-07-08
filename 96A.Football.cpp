
#include <bits/stdc++.h>
#include <string>
using namespace std;

/**
 *  @author Sudipto Dey Himel
 */

int main()
{
    string s;
    cin >> s;

    int count = 1;
    char temp = s[0];

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i+1] == temp)
            count++;
        else
        {
            count = 1;
            temp = s[i+1];
        }
        if (count >= 7)
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;

    return 0;
}
