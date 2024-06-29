#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double ld;

#define endl '\n'
#define fi first
#define se second 
#define pb push_back
#define ppb pop_back
#define HA cout<<"YES"<<endl
#define NA cout<<"NO"<<endl
#define mem(a, b) memset(a, b, sizeof(a))
#define tc() ll t;cin>>t;while(t--)
#define all(V) (V).begin(), (V).end()
#define bug(a) cout << #a << " : " << a << endl;
#define sumV(a) accumulate(a.begin(), a.end(), 0LL)
#define mxV(V) *max_element(V.begin(), V.end())
#define mnV(V) *min_element(V.begin(), V.end())
#define mx(a, b, c) max(a, max(b, c))
#define mx4(a, b, c, d) max(max(a, b), max(c, d))
#define mn(a, b, c) min(a, min(b, c))
#define ceiling(a, b) ((a / b) + (a % b != 0))
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a * b) / gcd(a, b))
#define opt() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

const int MAX_SIZE = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = LLONG_MAX;
const ld EPS = LLONG_MIN;

void solve() {
    ll n, m; cin >> n >> m;
    vector<vector<ll>> V(n+2, vector<ll>(m+2, 0));
    
    for(ll i=1; i<=n; i++) {
        for(ll j=1; j<=m; j++) 
            cin >> V[i][j];
    }

    for(ll i=1; i<=n; i++) {
        for(ll j=1; j<=m; j++) {
            ll temp = V[i][j];
            ll r = V[i][j+1], l = V[i][j-1];
            ll u = V[i+1][j], d = V[i-1][j];
            if(temp > r && temp > l && temp > u && temp > d) {
                V[i][j] = mx4(r, l, u, d);
            }
        }
    }

    for(ll i=1; i<=n; i++) {
        for(ll j=1; j<=m; j++) 
            cout << V[i][j] << " ";
        cout << endl;
    }
}

int main() {
    opt();
    tc() {
        solve();
    }
    return 0;
}
