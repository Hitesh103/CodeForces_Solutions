#include <bits/stdc++.h>
using namespace std;
 
int main(){
     
    int t;
    int cnt;
    int ans;
    cin >> t;
    int a,b,c;
    while(t--){
        cin >> a >> b >> c ;
        if (a == 1 && b == 1 || c == 1 && b == 1 || a == 1 && c == 1 )
        {
            ans  = ans + 1;
        }
        
    }

    cout << ans;
 
    return 0;
}