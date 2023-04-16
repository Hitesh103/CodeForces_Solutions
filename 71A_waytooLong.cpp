#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    string n;
    cin >> t;
    while (t--)
    {
        
        cin >> n;
        int size = n.length();
        if (size > 10)
        {
            cout << n[0] << size - 2 << n[size - 1] << endl;
        }
        else
        {
            cout << n << endl;
        }
    }
    return 0;
}