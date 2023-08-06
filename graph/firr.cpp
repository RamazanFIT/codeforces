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
// int w[1000 + 1][1000 + 1];
// int m[1000 + 1][1000 + 1];
pair<int, int> m[1001][1001];
pair<int, int> dp[1001][1001];
vector<char> path;


void rec(int i, int j){
    // cout << i << " " << j << ENDL;
    if(i == 0 and j == 0){
        return;
    }
    if(i - 1 >= 0){
        if(dp[i][j].first - m[i][j].first == dp[i - 1][j].first and dp[i][j].second - m[i][j].second == dp[i - 1][j].second){
            path.push_back('D');
            rec(i - 1, j);
            return;
        }
    }
    if(j - 1 >= 0){
        if(dp[i][j].first - m[i][j].first == dp[i][j - 1].first and dp[i][j].second - m[i][j].second == dp[i][j - 1].second){
            path.push_back('R');
            rec(i, j - 1);
            return;
        }
    }
    return;

}

pair<int, int> ff(int n){
    if(n == 0){
        return {0, 0};
    }
    int dvoika = 0;
    int five = 0;
    while(n % 2 == 0){
        dvoika++;
        n /= 2;
    }
    while(n % 5 == 0){
        five++;
        n/=5;
    }
    return {dvoika, five};
}

signed main(){
    
    goodluck
    // freopen("std.in", "r", stdin);
    // freopen("sdt.out", "w", stdout);

    int n;
    cin>>n;
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            int a;
            cin>>a;
            m[i][j] = ff(a);
        }
    }
    
    dp[0][0] = m[0][0];
    for(int i = 1; i < n; i++){
        dp[i][0] = {dp[i - 1][0].first + m[i][0].first, dp[i - 1][0].second + m[i][0].second};
        
        dp[0][i] = {dp[0][i - 1].first + m[0][i].first, dp[0][i - 1].second + m[0][i].second};
    }

    for(int i = 1; i < n; i++){
        for(int j = 1; j < n; j++){
            if(min(dp[i - 1][j].first + m[i][j].first, dp[i - 1][j].second + m[i][j].second) <
            min(dp[i][j - 1].first + m[i][j].first, dp[i][j - 1].second + m[i][j].second) ){
                dp[i][j] = {dp[i - 1][j].first + m[i][j].first, dp[i - 1][j].second + m[i][j].second};
            } else if(min(dp[i - 1][j].first + m[i][j].first, dp[i - 1][j].second + m[i][j].second) >
            min(dp[i][j - 1].first + m[i][j].first, dp[i][j - 1].second + m[i][j].second) ){
                dp[i][j] = {dp[i][j - 1].first + m[i][j].first, dp[i][j - 1].second + m[i][j].second};
            } else{
                if(max(dp[i - 1][j].first + m[i][j].first, dp[i - 1][j].second + m[i][j].second) <=
            max(dp[i][j - 1].first + m[i][j].first, dp[i][j - 1].second + m[i][j].second)){
                dp[i][j] = {dp[i - 1][j].first + m[i][j].first, dp[i - 1][j].second + m[i][j].second};

                } else{
                     dp[i][j] = {dp[i][j - 1].first + m[i][j].first, dp[i][j - 1].second + m[i][j].second};
                }
            }
            // int k = min(min(dp[i - 1][j].first, dp[i - 1][j].second), min(dp[i][j - 1].first, dp[i][j - 1].second));
            // if(k == min(dp[i - 1][j].first, dp[i - 1][j].second)){
            //     dp[i][j] = {dp[i - 1][j].first + m[i][j].first, dp[i - 1][j].second + m[i][j].second};
            // } else{
            //     dp[i][j] = {dp[i][j - 1].first + m[i][j].first, dp[i][j - 1].second + m[i][j].second};
            // }
            // dp[i][j] = {min(dp[i - 1][j].first, dp[i][j - 1].first), min(dp[i - 1][j].second, dp[i][j - 1].second)}
            // dp[i][j].first = min(dp[i][j].first, m[i][j].first + dp[i - 1][j].first);
            // dp[i][j].first = min(dp[i][j].first, m[i][j].first + dp[i][j - 1].first);
            // dp[i][j].second = min(dp[i][j].second, m[i][j].second + dp[i - 1][j].second);
            // dp[i][j].second = min(dp[i][j].second, m[i][j].second + dp[i][j - 1].second);
        }
    }

    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < n; j++){
    //         cout << "{" << dp[i][j].first << ", " << dp[i][j].second << "}" << " ";
    //     }
    //     cout << ENDL;

    // }

    cout << min(dp[n - 1][n - 1].first, dp[n - 1][n - 1].second) << ENDL;

    rec(n - 1, n - 1);

    for(int i = path.size() - 1; i >= 0; i--){
        cout << path[i];
    }


    endd
}

