#include <bits/stdc++.h>
using namespace std;
 
int main(){
     
    int n,k,l,c,d,p,nl,np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int total_drink = k*l;
    int total_lime = c*d;
    int total_salt = p;

    int drink = total_drink/nl;
    int lime = total_lime;
    int salt = total_salt/np;

    int ans = min(drink,min(lime,salt))/n;

    cout << ans << endl;

    return 0;
}