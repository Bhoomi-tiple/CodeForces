#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    string ans = "";
    int i = 0;

    bool singleSpace = true;

    while(i+2 < s.length()){
        if(s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B'){
            i+=3;
            if(!singleSpace){
                singleSpace = true;
                ans += " ";
            }
        }    
        else{
            ans += s[i];
            i++;
            singleSpace = false;
        }
    }

    for(int j = i; j < s.length(); j++){
        ans += s[j];
    }

    cout << ans;
    
    return 0;
}