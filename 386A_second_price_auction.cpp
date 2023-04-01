#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    vector<int> a(t);
    for (int i = 0; i < t; i++) {
        cin >> a[i];
    }

    vector<int> sorted_a(a);
    sort(sorted_a.begin(), sorted_a.end());

    for (int i = 0; i < t; i++) {
        if (sorted_a[t - 1] == a[i]) {
            cout << i + 1 << " ";
        }
    }

    for (int i = 0; i < t; i++) {
        if (sorted_a[t - 2] == a[i]) {
            cout << a[i] << endl;
        }
    }

    return 0;
}
