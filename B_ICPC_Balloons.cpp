#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int ans=0;
        map<char,int> freqmap;
        for(int i=0;i<s.length();i++){
            freqmap[s[i]]++;
        }
        for(auto& pair : freqmap){
            if(pair.second > 1){
                ans  = ans + pair.second + 1;
            }
            else if(pair.second == 1){
                ans  = ans + 2;
            }
        }
        cout << ans << endl;
    }
}