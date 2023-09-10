#include <iostream>

using namespace std;

int main() {
    long long n, m, a;
    cin >> n >> m >> a;

    // Calculate the number of flagstones needed for the rows and columns separately
    long long rows = (n + a - 1) / a;
    long long columns = (m + a - 1) / a;

    // Multiply the number of rows and columns to get the total number of flagstones needed
    long long result = rows * columns;

    cout << result << endl;

    return 0;
}
