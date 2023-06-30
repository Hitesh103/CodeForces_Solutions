#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int k = 0;
        while (n--)
        {
            int m;
            cin >> m;
            string b[m];
            for (int i = 0; i < m; i++)
            {
                cin >> b[i];
                if (b[i] == "D"){
                    a[i]--;
                    if(a[i] == -1 || a[i] == 10 ){
                        a[i] == 0;
                    }
                }
                else{
                    a[i]++;
                    if(a[i] == -1 || a[i] == 10 ){
                        a[i] == 0;
                    }
                }
            }
            k++;
        }
        for(int i =0;i<n;i++){
            cout << a[i] << endl;
        }
    }
}