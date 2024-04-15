#include <bits/stdc++.h>
#define ENDL "\n"
#define ff first 
#define ss second  
#define all(x) (x).begin(), (x).end()
#define endd return 0;
// #define int ll
#define goodluck ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using ll = long long;
using namespace std;

void solve(){
    int target, k, cnt1, cnt2;
    cin>>target>>k>>cnt1>>cnt2;
    int c = target / k;
    int d = target % k;
    // cout << c + d << ENDL;
    if(cnt2 <= c){
        c -= cnt2;
    } else{
        c = 0;
    }
    if(cnt1 >= d){
        cnt1 -= d;
        d = 0;
        c -= (cnt1 / k);

    } else{
        d -= cnt1;
    }
    // cout <<  c + d << ENDL;
    int ans = max(c + d, 0);
    cout << ans << ENDL;




}



signed main(){
    
    goodluck
    // freopen("std.in", "r", stdin);
    // freopen("sdt.out", "w", stdout);

    int n;
    cin>>n;
    while(n--) solve();
    


    endd
}

