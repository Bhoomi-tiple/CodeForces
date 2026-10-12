#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a, b;
    int cnt = 0;
    cin >> a >> b;

    for(int i = 1; i <= n; i++){
        if(i <= a){
            continue;
        }
        else if(n - i <= b){
            cnt++;
        }
    }

    cout << cnt;
    return 0;
}