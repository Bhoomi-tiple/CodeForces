#include<bits/stdc++.h>
using namespace std;

int main(){
    int a;
    int b;
    cin >> a >> b;

    for(int i = 0; i < 10; i++){
        a = 3 * a;
        b = 2 * b;
        if(a > b){
            cout << i + 1 << endl;
            break;
        }
    }
    return 0;
}