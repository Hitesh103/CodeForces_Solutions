#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;

    while(T--){
        int N;
        cin >> N;

        vector<int> nums(N+2);
        nums[0] = 0;
        for(int i=1; i<=N; i++){
            cin >> nums[i];
        }
        nums[N+1] = 1440;

        int ans = 0;
        for(int i=0; i<N+1; i++){
            if(nums[i+1] - nums[i] >= 240) ans += 2;
            else if(nums[i+1] - nums[i] >= 120) ans += 1;
        }

        if(ans/2) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}

