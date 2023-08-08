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
    int n, m;
    cin>>n>>m;
    vector<set<int>> graph(n + 1);
    bool flag = true;
    for(int i = 0; i < m; i++){
        int a, b;
        cin>>a>>b;
        int size_ = graph[a].size();
        graph[a].insert(b);
        if(a == b or size_ == graph[a].size()){
            flag = false;
        }
    }
    for(int i = 1; i <= n; i++){
        if(graph[i].size() == 0) continue;
        for(auto it : graph[i]){
            if(graph[it].find(i) != graph[it].end()){
                flag = false;
                break;
            }
        }
    }
    if(flag){
        cout << "YES" << ENDL;
    } else{
        cout <<"NO" << ENDL;
    }
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

