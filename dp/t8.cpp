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

    freopen("std.in", "r", stdin);
    freopen("sdt.out", "w", stdout);
    
    int n;
    cin >> n;

    vector<int> massive(n);
    for(int i = 0; i < n; i++) cin >> massive[i];

    int dp[n + 2] = {0};
    for(int i = 2; i < n + 2; i++){
        dp[i] = max(dp[i - 1] + massive[i - 2], dp[i - 2] + massive[i - 2]);
    }
    cout << dp[n + 1] << ENDL;
    endd
}

