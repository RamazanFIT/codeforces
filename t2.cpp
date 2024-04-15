#include <bits/stdc++.h>
#define ENDL "\n"
#define ff first 
#define ss second  
#define all(x) (x).begin(), (x).end()
#define endd return 0;
#define int ll
#define goodluck ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using ll = long long;
using namespace std;

void solve(){
    int target, k, cnt1, cnt2;
    cin>>target>>k>>cnt1>>cnt2;
    int c = target / k;
    int d = target % k;
    if(cnt1 >= d and cnt2 >= c){
        cout << 0 << ENDL;
    } else{
        if(cnt2 >= d){
            target -= k * d;

        } else{
            target -= k * cnt2;
        }
        // target -= cnt1;
        if(target <= 0){
            cout << 0 << ENDL;
            return;
        } 
        //     cout << (target / k) + (target % k) << ENDL;
        // }
        int add = target % k;
        if(cnt1 >= add){
            target -= add;
            cnt1 -= add;
            target -= (cnt1 / k) * k;
            if((target % k) + target / k <= 0){
                cout << 0 << ENDL;
            }else
            cout << (target % k) + target / k << ENDL;
        } else{
            if((add - cnt1) + target / k <= 0){
                cout << 0 << ENDL;
            } else
            cout << (add - cnt1) + target / k << ENDL;
        }

    }

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

