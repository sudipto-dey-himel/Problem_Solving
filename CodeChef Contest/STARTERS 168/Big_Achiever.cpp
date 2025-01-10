#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define bug(a) cout << #a << " : " << a << endl;
const ll MOD = 1e9 + 7;

void solve() {
    int n; cin >> n;
    vector<int> V(n);
    for(auto &x : V) cin >> x;
    for(int i = 0; i < n; i++) {
        if(i == 0) cout << 1 << ' ';
        else {
            int maxii = *max_element(V.begin(), V.begin() + i);
            if(V[i] < maxii) {
                cout << 0 << ' ';
            }
            else {
                cout << 1 << ' ';
            }

        }
    }
    cout << '\n';
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}