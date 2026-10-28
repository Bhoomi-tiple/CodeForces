#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    for(int i = 0; i < t; i++){
        long long x,y,z;
        cin >> x >> y >> z;
        long long ans = abs(x - y) + z;
        cout << ans <<endl;
    }

    return 0;
}