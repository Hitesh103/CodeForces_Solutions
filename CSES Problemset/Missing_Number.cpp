#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n - 1; i++) {
        cin >> arr[i];
    }

    // Initialize an array to keep track of numbers from 1 to n
    int count[n] = {0};

    // Mark elements present in the input array
    for (int i = 0; i < n - 1; i++) {
        count[arr[i] - 1] = 1;
    }

    // Find and print the missing number
    for (int i = 0; i < n; i++) {
        if (count[i] == 0) {
            cout << i + 1 << endl;
            break;
        }
    }

    return 0;
}
