#include <bits/stdc++.h>
#define ENDL "\n"
#define ff first 
#define ss second 
#define int ll 
#define all(x) (x).begin(), (x).end()
#define endd return 0;
#define goodluck ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using ll = long long;
using namespace std;

signed main(){
    
    goodluck
    // freopen("longpath.in", "r", stdin);
    // freopen("longpath.out", "w", stdout);

    int v, n;
    cin >> v >> n;
    int dp[v + 1] = {0};
    
    map<int, vector<int>> mapa;

    for(int i = 0; i < n; i++){
        int x, y;
        cin >> x >> y;
        mapa[x].push_back(y);
        // dp[y] = max(dp[x] + 1, dp[y]);
    }
    for(auto it = mapa.rbegin(); it != mapa.rend(); it++){
        // cout << it.first << ENDL;
        for(int i = 0; i < it->second.size(); i++){
            dp[it->second[i]] = max(dp[it->first] + 1, dp[it->second[i]]);
            // cout << it.second[i] << " ";
        }
        // cout << ENDL << ENDL;
    }
    int ans = 0;
    for(int i = 1; i <= v; i++){
        ans = max(ans, dp[i]);
    }

    cout << ans << ENDL;


    endd
}

