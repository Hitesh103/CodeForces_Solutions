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
    int a, b, c;
    vector<int> arr;
    while (t--)
    {
        cin >> a >> b >> c;

    if (a > b) {
      if (b > c)
         cout << b << endl;
      else if (a > c)
         cout << c << endl;
      else
         cout << a << endl;
   } else {
      if (a > c)
         cout <<  a << endl;
      else if (b > c)
         cout << c << endl;
      else
         cout <<  b << endl;
   }
    }
    return 0;
}