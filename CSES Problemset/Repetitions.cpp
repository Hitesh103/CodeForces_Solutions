#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int ans = INT_MIN;
    int count = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if(s[i] == s[i + 1]){
            count++;
        }else{
            ans = max(ans, count);
            count = 0;
        }
    }
    cout << ans + 1 << endl;
}