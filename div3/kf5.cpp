#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll size1, num;cin>>size1>>num;
    ll number = 0;
    bool k = 1;
    for(int i = 0; i < size1; i++){
        ll a;
        cin>>a;
       
        if(num <= a and k){
            number = number * 10 + num;
            k = 0;
        }
        number = number * 10 + a;
    }
    if(k) number = number * 10 + num;
    cout << number <<  "\n";
    return;
}




int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll size;cin>>size;
    while(size--){
        solve();
    }
    
    return 0;

}

