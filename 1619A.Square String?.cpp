#include <bits/stdc++.h>
#include <string>
using namespace std;
#define ll long long

// *** approach -> 1

void solve()
{
    string s, s1, s2;
    cin >> s;

    s1.resize(s.size()/2);
    s2.resize(s.size()/2);

    ll j = 0, count = 0;

    if (s.size() % 2 == 0)
    {
        for (ll i = 0; i < s.size() / 2; i++)
        {
            s1[j++] = s[i];
        }
        j = 0;
        for (ll i = s.size() / 2; i < s.size(); i++)
        {
            s2[j++] = s[i];
        }
        for (ll i = 0; i < s1.size(); i++)
        {
            if (s1[i] == s2[i])             
                count++;                    
        }
        if (count == s.size() / 2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    else
        cout << "NO" << endl;
}

// *** approach -> 2

// void solve() {
//     string s;
//     cin>>s;
//     (s.substr(0, s.size()/2) == s.substr(s.size()/2, s.size())) ? cout<<"YES\n" : cout<<"NO\n";
// }

int main()
{
    ll test_case;
    cin >> test_case;
    while (test_case--)
    {
        solve();
    }
}
