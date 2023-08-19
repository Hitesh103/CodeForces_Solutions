#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    int arr[] = {5,4,3,2,1};

    int ans = t/5;
    int rem = t%5;

    if(rem <6 && rem >=1){
        ans++;
    }

    cout << ans ;
    
    return 0;
}