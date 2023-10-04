#include<bits/stdc++.h>
#include<vector>
#define ll     long long
#define endl   '\n'
#define sq(a)   sqrt(a)
#define vecst(a) sort(a.begin(), a.end())
#define tc()   ll test_case;cin>>test_case;while(test_case--)
#define opt()  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;

void solve() {
    ll n;
    cin>>n;
    
    /*vector<ll>ans;
    for(ll i=1; i<=sq(n); i++) {
        if(n%i == 0) {
            ans.push_back(i);
            if(i != n/i)
            ans.push_back(n/i);
        }
    }
    bool check=false;
    for(ll i=1; i<ans.size(); i++) {
        if(ans[i]&1)
        check=true;
    }
    if(check) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;*/
    
    while(n%2==0) {
        n/=2;
    }
    if(n>1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main() {

    opt();

    tc() {
        solve();
    }

    return 0;
}
