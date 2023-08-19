#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    int num;

    cin  >> num >> t;

    while(t--){
        if(num%10 == 0){
            num = num / 10;
        }else{
            num--;
        }
    }

    cout << num;

    return 0;
}