#include <bits/stdc++.h>
using namespace std;
 
int main(){
     
    int t;
    int a , b;
    cin >> t;
    while(t--){
        cin >> a >> b;
        a = abs(a);
        b = abs(b);
        if(a == b){
            cout << 2 * a << endl;
        }
        else {
            cout << 2 * min(a,b) + 1 + 2*(abs(a-b)-1) << endl;
        }
    }
 
    return 0;
}