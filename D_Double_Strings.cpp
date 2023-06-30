#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<string> arr;
        vector<string> arr1;
        while(n--){
            string s;
            cin >> s;
            arr.push_back(s);
            arr1.push_back(s);
        }
        for(int i =0;i<arr.size();i++){
            for (int i = 0; i < arr[i].length(); i++)
            {
                for (int j = i; j < arr[i].length(); j++)
                {
                    for (int i = 0; i < arr1.size(); i++)
                    {
                        if(arr[i].substr(i,j) == arr1[i]){
                        }
                    }
                    
                }
                
            }
            
        }
    }
}