
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> V(n);
        for (int i = 0; i < n; i++)
            cin >> V[i];
        bool f = false;
        for (int i = 0; i < n; i++) {
            if (k == V[i]) {
                f = true;
                break;
            }
        }
        if (f)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
