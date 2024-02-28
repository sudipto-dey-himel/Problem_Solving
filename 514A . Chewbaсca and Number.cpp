#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define endl '\n'
#define HA cout<<"YES"<<endl
#define Ha cout<<"Yes"<<endl
#define ha cout<<"yes"<<endl
#define NA cout<<"NO"<<endl
#define Na cout<<"No"<<endl
#define na cout<<"no"<<endl
#define allV(V) (V).begin(), (V).end()
#define allA(arr, size) arr, arr+size
#define sortV(V) sort(allV(V))
#define revV(V) reverse(allV(V))
#define sortA(arr, size) sort(allA(arr, size))
#define revA(arr, size) reverse(allA(arr, size))
#define sumV(a) accumulate(a.begin(), a.end(), 0)
#define fi first
#define se second 
#define pb(V) push_back(V)
#define maxV(V) *max_element(V.begin(), V.end())
#define mnV(V) *min_element(V.begin(), V.end())
#define mx(a, b, c) max(a, max(b, c))
#define mn(a, b, c) min(a, min(b, c))
#define tc() ll t;cin>>t;while(t--)
#define opt() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

using namespace std;

void solve() {
    ll n;
    cin>>n;
    ll t = n;
    vector<ll> V;
    while(n != 0) {
        V.pb(n%10);
        n/=10;
    }
    //sortV(V);
    ll x = V.size();
    if(x == 1) {
        cout<<t<<endl; return;
    }
    revV(V);
    if((9-V[0]) == 0) cout<<V[0];
    else cout<<min(V[0], 9-V[0]);
        for(ll i=1; i<x; i++) {
            cout<<min(V[i], (9-V[i]));
        }
}

int main() {
    opt();
    solve();
    return 0;
}
