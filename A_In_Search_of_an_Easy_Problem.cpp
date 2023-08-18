    #include<bits/stdc++.h>
    using namespace std;

    int main(){
        int t;
        cin >> t;
        int easy = 0;
        int hard = 0;

        while (t--)
        {
            int x;
            cin >> x;

            if(x==0){
                easy++;
            }
            if(x==1){
                hard++;
            }
        }
        if(hard>0){
        cout << "HARD" << endl;            
        }else{
        cout << "EASY" << endl;
        }
        return 0;
    }