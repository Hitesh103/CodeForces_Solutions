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
        cin >> n;
        string a;
        string b;
        cin >> a >> b;

        // Replace 'G' with 'B' in string 1
        size_t pos = a.find('G');
        while (pos != string::npos)
        {
            a.replace(pos, 1, "B");
            pos = a.find('G', pos + 1);
        }

        // Replace 'G' with 'B' in string 2
        pos = b.find('G');
        while (pos != string::npos)
        {
            b.replace(pos, 1, "B");
            pos = b.find('G', pos + 1);
        }

        if (a == b)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}