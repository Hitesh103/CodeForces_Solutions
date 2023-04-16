#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    int len = s.length();

    for (int i = 1; i < n; i++) {
        string t;
        cin >> t;

        for (int j = 0; j < len; j++) {
            if (s[j] != t[j]) {
                len = j;
                break;
            }
        }
    }

    cout << len << endl;

    return 0;
}
