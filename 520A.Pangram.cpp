#include<bits/stdc++.h>
#include<string>
using namespace std;
#define ll long long

/**
 *  @author Sudipto Dey Himel
*/

int main() {
    ll n;
    cin>>n;
    string s;
    cin>>s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    sort(s.begin(), s.end());
    char ch='a';

    if(n>=26) {
        for(ll i=0; i<26; i++) {
            if(s.find(ch)==string::npos) {
                cout<<"NO"<<endl;
                return 0;
            }
            ch++;
        }
        cout<<"YES"<<endl;
        return 0;
    }
    cout<<"NO"<<endl;
    return 0;
}

/* Another valid solution ::
#include<bits/stdc++.h>
#include<string>
#define ll long long
#define endl '\n'
#define starr(a) sort(a, a+n)
#define ststr(a) sort(a.begin(), a.end())
#define lc(a) transform(a.begin(), a.end(), a.begin(), ::tolower)
#define vecst(a) sort(a.begin(), a.end())
#define tc() ll t;cin>>t;while(t--)
#define opt() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;

void solve() {
    ll n, count=0;
    cin>>n;
    string s;
    cin>>s;
    lc(s);
    ststr(s);
    for(ll i=0; i<n; i++) {
        if(s[i]!=s[i+1])
        count++;
    }
    if(count==26)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}
int main() {

    opt();

    solve();

    return 0;
}
*/
