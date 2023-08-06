#include <bits/stdc++.h>
#define ENDL "\n"
#define ff first 
#define int ll
#define ss second  
#define all(x) (x).begin(), (x).end()
#define endd return 0;
#define goodluck ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using ll = long long;
using namespace std;

signed main(){
    
    goodluck

    int n, k;
    cin>>n >> k;
    set <int> set_;
    vector<int> massive(n);
    for(int i = 0; i < n; i++){
        cin >> massive[i];
        set_.insert(massive[i]);
    }
    int ans = 0;

    while(k--){
        ans = *set_.begin();
        set_.erase(ans);
        for(int i = 0; i < n; i++){
            set_.insert(ans + massive[i]);
        }
    }
    cout << ans;


    endd
}

