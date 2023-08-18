#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

        int ans[t];
        int temp;

        for (int i = 0; i <t; i++)
        {
            cin >> temp;
            ans[temp-1] = i+1;
            
        }

        for (int i = 0; i < t; i++)
        {
            cout << ans[i] << " ";
        }
        
    return 0;
}