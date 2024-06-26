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
#define ppb() pop_back()
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
const ll INF = LLONG_MAX;
const ld EPS = LLONG_MIN;

using namespace std;

void solve() {
    string s; cin>>s;
    stack<ll> up, lo;
    for(ll i=0; i<s.size(); i++) {
        if(s[i] != 'B' && s[i] >= 'A' && s[i] <= 'Z') up.push(i);
        if(s[i] != 'b' && s[i] >= 'a' && s[i] <= 'z') lo.push(i);

        if(s[i] == 'B' && !up.empty()) {
            s[up.top()] = '?'; up.pop();
        }
        if(s[i] == 'b' && !lo.empty()) {
            s[lo.top()] = '?'; lo.pop();
        }
    }
    //cout<<s<<endl;
    for(auto i : s) {
        if(i == 'B' || i == 'b' || i == '?') continue;
        else cout<<i;
    }
    cout<<endl;
}

int main() {
    opt();
    tc() {
        solve();
    }
    return 0;
}
