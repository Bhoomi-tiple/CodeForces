#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int k;
    cin >> k;
    
    int f[n];
    int t[n];
    for(int i = 0; i < n; i++){
        cin >> f[i] >> t[i];
    }

    for(int i = 0; i < n; i++){
        if(t[i] > k){
            f[i] = f[i] - (t[i] - k);
        }
        else{
            f[i] = f[i];
        }
    }
    
    int maxi = f[0];
    for(int i = 1; i < n; i++){
        maxi = max(f[i], maxi);
    }

    cout <<  maxi;
    return 0;
}