#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define tc() ll t;cin>>t;while(t--)
#define opt() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;

void solve() {
    ll x;
    cin>>x;
    ll count=0;
    while(x!=0) {
        ll r = x%2;
        count+=r;
        x/=2;
    }
    cout<<count<<endl;
}

int main() {
    opt();
    solve();

    return 0;
}
