#include <bits/stdc++.h>
#define ENDL "\n"
#define ff first 
#define ss second  
#define all(x) (x).begin(), (x).end()
#define endd return 0;
#define goodluck ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using ll = long long;
using namespace std;

signed main(){
    
    goodluck
    // freopen("std.in", "r", stdin);
    // freopen("sdt.out", "w", stdout);

    int n, l, r, x;
    cin>>n>>l>>r>>x;
    
    vector<int> massive(n);
    int ans = 0;
    for(int i = 0; i < n; i++) cin>>massive[i];
    sort(all(massive));
    for(int i = 2; i <= n; i++){
        vector<bool> bolean(n, 0);
        for(int j = n - 1; j > n - 1 - i; j--){
            bolean[j] = 1;
        }
        do
        {
            int min_ = INT_MAX;
            int max_ = INT_MIN;
            int sum_ = 0;
            for(int j = 0; j < n; j++){
                if(bolean[j]){
                    min_ = min(min_, massive[j]);
                    max_ = max(max_, massive[j]);
                    sum_ += massive[j];
                }
            }
            if(sum_ >= l and sum_ <= r and (max_ - min_) >= x) ans++;
        } while (next_permutation(all(bolean)));
    }
    cout << ans << ENDL;
    
    


    endd
}

