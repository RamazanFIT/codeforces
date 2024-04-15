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
    freopen("lepus.in", "r", stdin);
    freopen("lepus.out", "w", stdout);

    
    int n;
    cin>>n;
    vector<int> massive(n);
    vector<int> dp(n + 5);
    for(int i = 0; i < 5; i++) dp[i] = INT_MIN;
    
    for(int i = 0; i < n; i++){
        char a;
        cin >> a;
        if(a == 'w') massive[i] = INT_MIN;
        else if(a == '"') massive[i] = 1;
        else massive[i] = 0;
        dp[i + 5] = INT_MIN;
    }
    dp[5] = massive[0];
    for(int i = 6; i < n + 5; i++){
        if(massive[i - 5] == INT_MIN){
            dp[i] = INT_MIN;
            continue;
        }
        dp[i] = max(max(dp[i - 1] , dp[i - 3]), dp[i - 5]) + massive[i - 5];
    }
    if(dp[n + 4] < 0){
        cout << -1 << ENDL;
    } else{
        cout << dp[n + 4] << ENDL;
    }
    // for(int i = 5; i < n + 5; i++) cout << dp[i] << " ";
    


    endd
}

