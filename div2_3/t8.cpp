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

signed main(){
    
    goodluck
    // freopen("std.in", "r", stdin);
    // freopen("sdt.out", "w", stdout);

    
    int n, m;
    cin>>n>>m;
    int ind1 = 0;
    int w[n], a[m];
    map<int, int> mapa1;
    map<int, int> mapa2;
    
    for(int i = 0; i < n; i++){
        cin>>w[i];
        mapa1[w[i]]++;

    }
    for(int i = 0; i < m; i++){
        cin>>a[i];
        mapa2[a[i]]++;

    }
    int ans = 0;
    for(auto element : mapa1){
        if(mapa2.find(element.first) != mapa2.end()){
            ans += element.second * mapa2[element.first];
        }
    }
    cout << ans << ENDL;
    

    endd
}

