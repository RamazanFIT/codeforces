#include <bits/stdc++.h>
#define ENDL "\n"
#define ff first 
#define ss second  
#define all(x) (x).begin(), (x).end()
#define endd return 0;
#define goodluck ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using ll = long long;
using namespace std;

int w[1000][1000];

signed main(){
    
    goodluck
    // freopen("slalom.in", "r", stdin);
    // freopen("slalom.out", "w", stdout);
    for(int i = 0; i < 1000; i++){
        for(int j = 0; j < 1000; j++) w[i][j] = INT_MIN;
    }
    int n;
    cin>>n;

    cin >> w[1][1];
    for(int i = 2; i <= n; i++){
        for(int j = 1; j < i + 1; j++){
            cin >> w[i][j];
        }
    }
    for(int i = 2; i <= n; i++){
        for(int j = 1; j < i + 1; j++){
            w[i][j] += max(w[i - 1][j], w[i - 1][j - 1]);
        }
    }

    int ans = INT_MIN;
    for(int i = 1; i <= n; i++){
        ans = max(ans, w[n][i]);
    }
    cout << ans << ENDL;

    endd
}

