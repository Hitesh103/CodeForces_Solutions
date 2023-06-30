#include<bits/stdc++.h>
using namespace std;

int main(){
        int n;
        cin>>n;
        map<int,int> mp;
        vector<int> nums(2*n);

        for(int i=0;i<2*n;i++){
            cin >> nums[i];
        }
        int cnt=0;
        int maxCnt = 0;
        for(int i=0;i<2*n;i++){
            mp[nums[i]]++;
            cnt++;
            for(auto it : mp){
                if(it.second>1){
                    cnt -= 2;
                    it.second -= 2;
                    maxCnt = max(cnt+1,maxCnt);
                }
            }
        }
        cout << maxCnt;
  }