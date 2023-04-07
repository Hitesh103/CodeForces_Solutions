#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define debug(n) cout<< (n) <<endl
#define pb push_back

const ll INF = 2e18 + 99;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
     int a,b,c;
     cin >> a >> b >> c;
     if(a + b == c){
        cout << "YES" << endl;
     }
     else if(c + b == a){
        cout << "YES" << endl;
     }
     else if(a + c == b){
        cout << "YES" << endl;
     }
     else{
        cout << "NO" <<endl;
     }
    }

    return 0;
}