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

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        sort(s.begin(),s.end());
        cout << s.back() - 'a' + 1 << "\n";
    }

    return 0;
}