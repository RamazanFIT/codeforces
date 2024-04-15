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
    int n;
    cin>>n;
    int w[n];
    // vector<int> w(n);
    for(int i = 0; i < n; i++){
        w[i] = i + 1;
    }
    
    int anss = INT_MIN;
    for(int i = 0; i < n; i++){
        // reverse(w.begin() + i, w.end());
        reverse(w + i, w + n);
        int ans = 0;
        int min_ = 0;
        for(int i = 0; i < n; i++){
            min_ = max(min_, (i + 1) * w[i]);
            ans += (i + 1) * w[i];
        }
        anss = max(anss, ans - min_);
        reverse(w + i, w + n);
    }
    // for(int i = 0; i < n; i++) cout << w[i] << " ";
    cout << anss << ENDL;
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

