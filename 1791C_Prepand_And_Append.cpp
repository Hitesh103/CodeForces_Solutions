#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define debug(n) cout << (n) << endl
#define pb push_back

const ll INF = 2e18 + 99;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Code
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        while ((s[0] == '1' && s[n-1] == '0') || (s[n - 1] == '1' && s[0] == '0'))
        {
            s.erase(0,1);
            s.erase(n-1,1);
            n = n-2;
        }
        cout << n << endl;
    }
    return 0;
}