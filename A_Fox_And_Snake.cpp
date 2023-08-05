#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= n; ++i) {
        if (i % 2 == 1) {
            for (int j = 0; j < m; ++j)
                cout << "#";
        } else {
            if (i % 4 == 0) {  // For even rows, except the first one
                cout << "#";
                for (int j = 1; j < m; ++j)
                    cout << ".";
            } else {  // For even rows, the first one
                for (int j = 0; j < m - 1; ++j)
                    cout << ".";
                cout << "#";
            }
        }
        cout << endl;
    }

    return 0;
}
