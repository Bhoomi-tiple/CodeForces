#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    int n = s.length();
    string ans = "";
    int cnt1 = 0, cnt2 = 0, cnt3 = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == '1'){
            cnt1++;
        } 
        else if(s[i] == '2'){
            cnt2++;
        }
        else if(s[i] == '3'){
            cnt3++;
        }
    }
    
    for(int i = 0; i < cnt1; i++){
        ans += "1+";
    }
    for(int i = 0; i < cnt2; i++){
        ans += "2+";
    }
    for(int i = 0; i < cnt3; i++){
        ans += "3+";
    }
    cout << ans.substr(0, ans.length() - 1) << endl;
    return 0;
}