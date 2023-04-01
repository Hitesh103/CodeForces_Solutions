#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
         int n ;
         cin >> n;
         int even = 0;
         int odd = 0;
         for (int i = 0; i < n; i++)
         {
            int num;
            cin >> num;
            if(num%2==0){
                even = even + num;
            }
            else {
                odd = odd + num;
            }
         }
         cout << (even > odd ? "YES" : "NO") << endl;
    }

    return 0;
}