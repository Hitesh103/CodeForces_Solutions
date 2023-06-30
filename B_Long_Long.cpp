#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int a[n];
        long long sum = 0;

        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+= abs(a[i]);
        }

        int cnt =0;
        bool inNegativeSubArray = false;

        for(int i=0;i<n;i++){
            if(a[i]<0 && inNegativeSubArray == false){
                inNegativeSubArray = true;
                cnt++;
            }
            if(a[i] > 0){
                inNegativeSubArray = false;
            }
        }
        cout << sum << " " << cnt << endl;
    }
}