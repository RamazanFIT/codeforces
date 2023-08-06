#include <bits/stdc++.h>
#define ENDL "\n"
#define ff first 
#define int ll
#define ss second  
#define all(x) (x).begin(), (x).end()
#define endd return 0;
#define goodluck ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using ll = long long;
using namespace std;
int w[51][51];
signed main(){
    
    goodluck
    freopen("knight.in", "r", stdin);
    freopen("knight.out", "w", stdout);

    int n, m;
    cin>> n >> m;   
    if(n == 1 and m == 1){
        cout << 1;
        return 0;
    }
    w[0 + 2][0 + 1] = 1;
    w[0 + 1][0 + 2] = 1;
    for(int i = 2; i < n; i++){
        for(int j = 2; j < m; j++){
            w[i][j] = w[i - 2][j - 1] + w[i - 1][j - 2];
        }
    }
    cout << w[n - 1][m - 1] << ENDL;
    


    endd
}

