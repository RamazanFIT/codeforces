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
    int k = n * (n - 1) / 2;
    vector<int> ans(n, 1000000000);
    map<int, int> mapa;
    for(int i = 0; i < k; i++){
        int a;
        cin>>a;
        mapa[a]++;
    }
    vector<pair<int, int>> some_v;
    for(auto it : mapa){
        some_v.push_back({it.second, it.first});
    }
    sort(all(some_v));
    for(int i = 0; i < some_v.size(); i++){
        cout << some_v[i].second<< " ";
    }
    for(int i = 0; i < n - some_v.size(); i++){
        cout << 1000000000 << " ";
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
    


    endd
}

