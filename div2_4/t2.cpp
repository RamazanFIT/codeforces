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
    for(int i = 1; i <= n; i+=2){
        for(int j = i; j <= n; j*=2){
            cout << j << " ";
        }
    }
    cout << ENDL;
    
}


signed main(){
    
    goodluck
    // freopen("std.in", "r", stdin);
    // freopen("sdt.out", "w", stdout);

    
    int n;
    cin>>n;
    while(n--){
        solve();
    }
    // cout << current;
    


    endd
}

