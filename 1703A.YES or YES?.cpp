
#include<bits/stdc++.h>
#include<string>
using namespace std;
#define ll long long
#define check "yes"

void solve() {
    string s;
    cin>>s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    if(check==s)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}

int main() {
    ll t;
    cin>>t;
    while(t--) {
        solve();
    }
}
