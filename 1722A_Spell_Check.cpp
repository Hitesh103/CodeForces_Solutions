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
     int n;
     cin >> n;
     string s;
     cin >> s;
     string m = "Timur";

     sort(s.begin(),s.end());
     sort(m.begin(),m.end());
     
     if(s == m){
        cout << "YES" <<endl;
     }
     else{
        cout << "NO" << endl;
     }

    }

    return 0;
}