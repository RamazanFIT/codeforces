#include <bits/stdc++.h>
#define ENDL "\n"
#define ff first 
#define ss second  
#define all(x) (x).begin(), (x).end()
#define endd return 0;
#define goodluck ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using ll = long long;
using namespace std;

int w[9][9];

int dp[9][9];

signed main(){
    
    goodluck
    freopen("king2.in", "r", stdin);
    freopen("king2.out", "w", stdout);

    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++) cin >> w[i][j];
    }
    
    for(int i = 6; i >= 0; i--){
        dp[i][0] = w[i][0] + dp[i + 1][0];
    }
    for(int i = 1; i < 8; i++){
        dp[7][i] = w[7][i] + dp[7][i - 1];
    }
    for(int j = 1; j < 8; j++){
        for(int i = 6; i >= 0; i--){
            dp[i][j] = min(min(dp[i][j - 1],dp[i + 1][j]), dp[i + 1][j - 1]) + w[i][j];
        }
    }
    cout << dp[0][7] << ENDL;
    // for(int i = 0; i < 8; i++){
    //     for(int j = 0; j < 8; j++) cout << dp[i][j] << " "; cout << ENDL;
    // }
    

    


    endd
}

