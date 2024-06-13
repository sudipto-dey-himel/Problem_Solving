#include <bits/stdc++.h>

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
#define mn(a, b, c) min(a, min(b, c))
#define ceiling(a, b) ((a / b) + (a % b != 0))
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a * b) / gcd(a, b))
#define opt() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

const int MAX_SIZE = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = LLONG_MAX;
const ld EPS = LLONG_MIN;

using namespace std;


ll calc(vector<ll> &V) {
    ll ans = 0;
    for(ll i=0; i<V.size()-1; i++) {
        ans += abs(V[i] - V[i+1]);
    }
    return ans;
}

void solve() {
    ll n, k; cin >> n >> k;
    vector<ll> V(n);
    for(auto &x : V) cin >> x;
    ll mx = calc(V);
    for(ll i=0; i<n; i++) {
        ll temp = V[i];
        V[i] = 1; mx = max(mx, calc(V));
        V[i] = k; mx = max(mx, calc(V));
        V[i] = temp;
    }

    cout << mx << endl;
}

int main() {
    opt();
    tc() {
        solve();
    }
    return 0;
}