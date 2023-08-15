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
    int v, m;
    cin>>v>>m;
    int w[v + 1] = {0};
    while(m--){
        int a, b;
        cin>>a>>b;
        w[a]++;
        w[b]++;
    }
    for(int i = 1; i <= v; i++){
        cout << w[i] << " ";

    }
    cout << ENDL;
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

