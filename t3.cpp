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
    while(cnt2-- and target - k >= 0){
        target-=k;
        cnt2--;
    }
    // target = max(0, target - cnt1);
    // cout << target % k + target / k << ENDL;

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

