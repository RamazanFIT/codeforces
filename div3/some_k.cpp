#include <bits/stdc++.h>
#define endl "\n"
#define ff first 
#define ss second  
#define int ll
#define all(x) (x).begin(), (x).end()
#define end return 0;
#define goodluck ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using ll = long long;
using namespace std;

ll f(ll& x){
    int t = x % 10;
    x /= 10;
    return t;
}
void solve(){

    string code;cin>>code;
    int size;
    cin>>size;
    ll s1, s2;
    cin >> s1 >> s2;
bool flag = true;
    for(ll j = s1; j <= s2; j++){
        if(!flag)break;
    int cnt1 = 0;
    
    ll ss = j;
    for(int i = code.size() - 1; i>= 0;  i--){
        // if(id1 >= s1.size() or id2 >= s2.size()) break;
        // if(ss == 0) break;
        if(f(ss) == (code[i] - '0')){
            cnt1++;
           
        }
        if(cnt1 != size) {cout << "YES" << endl;flag=false;break;}
    }
    
    }
    // if(cnt2 != size or cnt1 != size) cout << "YES" << endl;
    if(flag)
    cout << "NO" << endl;
    return;
}





signed main(){
    
    goodluck
    int size;cin>>size;
    while(size--) solve();



    end
}
