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

void solve(){
    int n;
    cin>>n;
    vector<pair<int, int>> some(n + 1);
    for(int i = 0; i < n; i++){
        // cin >> some[i].second;
        // some[i].first = i + 1;
        int c;
        cin>>c;
        some[i] = {i + 1, c};
    }
    vector<set<int>> graph(n + 2);
    for(int i = 0; i < n; i++){
        // if(some[i].second <= 0) continue;
        for(int j = 0; j < n; j++){
            if(some[i].second <= 0) break;
            if(i == j or graph[some[i].first].find(some[j].first) != graph[some[i].first].end()) continue;
            if(some[j].second >= 1){
                // graph[some[i].first].insert(some[j].first);
                
                graph[some[j].first].insert(some[i].first);
                some[i].second--;
                some[j].second--;
            }
        }
    }
    int cnt = 0;
    for(int i = 1; i <= n; i++){
        if(!graph[i].empty()) cnt+=graph[i].size();
    }
    
    cout << cnt << ENDL;
    if(cnt == 0) return;
    for(int i = n; i>=1;i--){
        if(!graph[i].empty())
        for(auto vertex : graph[i]){
            cout << i << " " << vertex << ENDL; 
        }
    }
    return;
}



signed main(){
    
    goodluck
    // freopen("std.in", "r", stdin);
    // freopen("sdd.out", "w", stdout);

    int n;
    cin>>n;
    while(n--) solve();
    


    endd
}

