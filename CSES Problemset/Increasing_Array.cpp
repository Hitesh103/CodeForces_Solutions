#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ;
    cin >> n;
    long long int arr[n];
    long long int moves = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for(int i=1;i<n;i++){
        while (arr[i] < arr[i - 1])
        {
            arr[i]++;
            moves++;
        }
    }

    cout << moves << endl;
    
}