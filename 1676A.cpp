//LUCKY?
#include<bits/stdc++.h>
#include<string>
using namespace std;

void solve() {
    string s;
    cin>>s;
    int sum1=0, sum2=0;
    for(int i=0; i<s.size()/2; i++) {
        if(s[i]>='0' && s[i]<='9')
        sum1+=s[i]-'0';
    }
     for(int i=s.size()/2; i<s.size(); i++) {
        if(s[i]>='0' && s[i]<='9')
        sum2+=s[i]-'0';
    }
    if(sum1==sum2)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}
int main() {
    int t;
    cin>>t;
    while(t--) {
        solve();
    }
}