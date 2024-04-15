#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    string s = "codeforces";
    int size;cin>>size;
    while(size--){
        int cnt = 0;
        for(int i = 0; i < s.size(); i++){
            char a;
            cin >> a;
            if(a != s[i]) cnt++;
        }
        cout << cnt << "\n";
    }
    


}

