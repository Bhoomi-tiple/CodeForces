#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    int cheese[n];
    int sausage[n];

    for(int i = 0; i < n; i++){
        cin >> cheese[i] >> sausage[i];
    }

    for(int i = 0; i < n; i++){
        if(cheese[i] <= sausage[i]){
            cout << -1 <<endl;
        } else {
        cout << min(sausage[i], cheese[i] - sausage[i]) <<endl;
        }
    }

    return 0;
}