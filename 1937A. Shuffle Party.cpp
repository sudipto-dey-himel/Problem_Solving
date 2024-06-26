#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define endl '\n'
#define bug(a) cout << #a << " : " << a << endl;
#define allV(V) (V).begin(), (V).end()
#define allA(arr, size) arr, arr+size
#define sortA(arr, size) sort(allA(arr, size))
#define revA(arr, size) reverse(allA(arr, size))
#define sortV(V) sort(allV(V))
#define revV(V) reverse(allV(V))
#define revS(s) reverse(s.begin(), s.end())
#define sumV(a) accumulate(a.begin(), a.end(), 0)
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

const int MAX_SIZE = 1e9 + 5;
const ll MOD = 1e9;
const ll INF = INT_MAX;
const ld EPS = INT_MIN;

using namespace std;


void solve() {
    ll n; cin>>n;
    ll ans = 1;
    if(n == 1) {
        cout<<1<<endl; return;
    }
    if(n == 2 || n == 3) {
        cout<<2<<endl; return;
    }
    else {
        while(ans<n) {
        ans <<= 1;
        if(ans>n) {
            ans >>= 1; break;
        }
    }
    cout<<ans<<endl;
    }
}

int main() {
    opt();
    tc() {
        solve();
    }
    return 0;
}
