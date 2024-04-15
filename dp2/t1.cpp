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

    int backpack, n;
    cin >> backpack >> n;

    vector<int> items(n);
    for(int i = 0; i < n; i++) cin >> items[i];

    vector<vector<int>> dp(backpack + 1, vector<int>(n + 1));
    
    for(int i = 0; i < n; i++){
        for(int j = 1; j <= backpack; j++){
            if(items[i] <= j){
                int ost = j - items[i];
                dp[j][i + 1] = max(items[i] + dp[ost][i], dp[j][i]);

            } else{
                dp[j][i + 1] = dp[j][i];
            }
        }
    }
    cout << dp[backpack][n] << ENDL;



    


    endd
}

