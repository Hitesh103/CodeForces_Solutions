#include <bits/stdc++.h>
using namespace std;
 
int main(){
     
    int t;
    cin >> t;
    while(t--){
        int n;
        string s;
        cin >> n >> s;

        vector<bool> even(26),odd(26);
        for(int i=0;i<s.size();i++){
            if(i%2==1){
                odd[s[i]-'a'] = true;
            }
            else{
                even[s[i]-'a'] = true;
            }
        }
        bool ok = true;
        for(int i=0;i<26;i++){
            if(odd[i] && even[i]){
                ok = false;
            }
        }
        cout << (ok ? "YES" : "NO") << endl;
    }
 
    return 0;
}