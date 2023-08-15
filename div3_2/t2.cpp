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
    int n, m;
    cin>>n>>m;
    int w[n][m];
    int cnt = 1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            w[i][j] = cnt;
            cnt++;
        }
    }
    if(m % 2 == 0){
        for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << w[i][j] << " ";
        }
        cout << ENDL;
    }
    } else{
        for(int i = n; i >= 1; i--){
            if(i % 2 != 0){
                for(int j = 0; j < m; j++){
                    cout << w[i - 1][j] << " ";
                }
                cout << ENDL;
            } 
        }
        for(int i = n; i >= 1; i--){
            if(i % 2 == 0){
                for(int j = 0; j < m; j++){
                    cout << w[i - 1][j] << " ";
                }
                cout << ENDL;
            } 
        }
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

