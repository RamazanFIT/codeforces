#include <bits/stdc++.h>
#define ENDL "\n"
#define ff first 
#define ss second  
#define all(x) (x).begin(), (x).end()
#define endd return 0;
#define goodluck ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using ll = long long;
using namespace std;

int cnt = 0;


void dfs(vector<bool> &used, vector<set<int>> &graph, int vertex){
    used[vertex] = true;
    cnt++;
    for(auto it : graph[vertex]){
        if(!used[it]){
            dfs(used, graph, it);
        }
    }
    return;
}

void solve(){
    int v, m, k;
    cin>>v>>m>>k;

    vector<set<int>> graph(v + 1);

    // set<int> vertices;
    int c[k];
    for(int i = 0; i < k; i++){
        int a;
        cin>>a;
        // vertices.insert(a);
        c[i] = a;
    }
    for(int i = 0; i < m; i++){
        int a, b;
        cin>>a>>b;
        graph[a].insert(b);
        graph[b].insert(a);
    }
    // set<int> copy;
   
    vector<bool> used(v + 1, 0); 
    for(int i = 0; i < k; i++){
        if(used[c[i]]) continue;
        dfs(used, graph, c[i]);
        // dfs 
    }
    if(cnt == k){
        cout << "YES"<<ENDL;
    } else cout <<"NO" << ENDL;
    cnt = 0;
  
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

