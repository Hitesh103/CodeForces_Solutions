#include<bits/stdc++.h>
using namespace std;

int main(){
    string t;
    cin >> t;

    int small = 0;
    int big   = 0;

    for (int i = 0; i < t.length(); i++)
    {
        if(islower(t[i])){
            small++;
        }else{
            big++;
        }
    }
    
    if(small>=big){
        for (int i = 0; i < t.length(); i++)
        {
            t[i] = tolower(t[i]);
        }
    }else{
        for (int i = 0; i < t.length(); i++)
        {
            t[i] = toupper(t[i]);
        }
    }

    cout << t << endl;

    return 0;
}