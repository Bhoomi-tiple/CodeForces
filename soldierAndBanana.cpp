#include<bits/stdc++.h>
using namespace std;

int main(){
    int k;
    int n;
    int w;
    cin >> k >> n >> w;

    int totalCost = 0;
    for(int i = 0; i < w; i++){
        totalCost += k * (i+1);
    }
    cout << max(0, totalCost - n) << endl;
    return 0;
}