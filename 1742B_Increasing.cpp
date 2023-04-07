#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define debug(n) cout << (n) << endl
#define pb push_back

const ll INF = 2e18 + 99;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a,a+n);
        bool found_duplicate = false;
        for (int i = 0; i < n - 1; i++) {
            if (a[i] == a[i + 1]) {
                found_duplicate = true;
                break;
            }
        }
        if (found_duplicate) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
    return 0;
}
