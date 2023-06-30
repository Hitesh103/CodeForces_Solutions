#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        for (char& c : s) {
        c = std::tolower(c);
        }
        if(s == "yes"  ) cout << "YES" << endl;
        else cout << "NO" <<endl;
    }
}