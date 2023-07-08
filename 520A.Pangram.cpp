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
