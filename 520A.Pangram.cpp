//***Way->1
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

/* ***Way->2
void solve() {
    ll n, count=0;
    cin>>n;
    string s;
    cin>>s;
    set<char>st;
    lc(s);
    ststr(s);
    for(ll i=0; i<n; i++) {
        st.insert(s[i]);
    }
    string ans = (st.size()==26) ? "YES" : "NO";
    cout<<ans<<endl;
}
*/

/* ***Way->3
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
*/
