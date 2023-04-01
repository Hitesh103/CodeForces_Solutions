#include <bits/stdc++.h>
using namespace std;

int main(){

    string n;
    cin>>n;

    for(auto& digit : n){
        if(digit > '4'){
            digit = '9' - digit + '0';
        }
    }

    if(n.front() == '0'){
        n.front() = '9';
    }
    cout << n << endl;
    return 0;

}
