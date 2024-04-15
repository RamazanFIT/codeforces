#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll size;cin>>size;
    while(size--){
        ll some_size;cin>>some_size;
        char num;cin>>num;
        string ans = "";
        bool flag = true;
        while(some_size--){
            char a;
            cin >> a;
            if(num > (a) and flag){
                // ans = ans * 10 + num;
                ans += num;
                flag =false;
            }       
            // ans = ans * 10 + (a - '0');
            ans += a;
            
        }
        if(flag) ans += num;
        cout << ans << "\n";
    }    


}

