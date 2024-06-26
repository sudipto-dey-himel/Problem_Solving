#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define endl '\n'
#define bug(a) cout << #a << " : " << a << endl;
#define allV(V) (V).begin(), (V).end()
#define allA(arr, size) arr, arr+size
#define allS(s) s.begin(), s.end()
#define sumV(a) accumulate(a.begin(), a.end(), 0LL)
#define fi first
#define se second 
#define pb(V) push_back(V)
#define ppb(V) pop_back(V)
#define maxV(V) *max_element(V.begin(), V.end())
#define mnV(V) *min_element(V.begin(), V.end())
#define mx(a, b, c) max(a, max(b, c))
#define mn(a, b, c) min(a, min(b, c))
#define HA cout<<"YES"<<endl
#define NA cout<<"NO"<<endl
#define tc() ll t;cin>>t;while(t--)
#define ceiling(a, b) ((a / b) + (a % b != 0))
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a * b) / gcd(a, b))
#define opt() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

const int MAX_SIZE = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = INT_MAX;
const ld EPS = INT_MIN;

using namespace std;

void solve() {
    ll n; cin>>n;
    vector<ll> V(n);
    for(auto &x : V) cin>>x; 
    bool f = true;
    for(ll i=0; i<n-2; i++) {
        if(V[i] < 0) {
            f = false; break;
        }
        V[i+1] -= 2*V[i];
        V[i+2] -= V[i];
        V[i] = 0;
    }
    if(!f) NA;
    else {
        for(auto i : V) {
            if(i != 0) {
                NA; return;
            }
        }
        HA;
    }
}

int main() {
    opt();
    tc() {
        solve();
    }
    return 0;
}
