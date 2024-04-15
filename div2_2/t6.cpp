#include <bits/stdc++.h>
#define ENDL "\n"
#define ff first 
#define ss second  
#define all(x) (x).begin(), (x).end()
#define endd return 0;
#define goodluck ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using ll = long long;
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<set<int>> graph(n + 1);
    // int w[n + 1];
    vector<int> w(n + 1);
    for(int i = 0; i < n; i++){
        int a;
        cin>>a;
        w[i + 1] = a;
    }
    
    vector<pair<int, int>> ans;
    for(int i = 1; i <= n; i++){
        for(int j = i + 1; j <= n; j++){
            if(w[i] <= 0) break;

            if(w[j] >= 1){
                ans.push_back({i, j});
                w[i]--;
                w[j]--;
            }
            
        }
    }
    cout << ans.size() << ENDL;
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i].first << " " << ans[i].ss << ENDL;
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

