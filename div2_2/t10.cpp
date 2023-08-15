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
queue<int> q;
int w[200001];

void dfs(vector<bool> &used, vector<set<int>> &graph, int vertex){
    used[vertex] = true;
    q.push(vertex);
    for(auto it : graph[vertex]){
        if(!used[it])
        dfs(used, graph, it);
    }
}


signed main(){
    
    goodluck
    // freopen("std.in", "r", stdin);
    // freopen("sdt.out", "w", stdout);

    int v, m;
    cin>>v>>m;
    vector<set<int>> graph(v + 1);
    vector<bool> used(v + 1, 0);
    for(int i = 0; i < m; i++){
        int a, b;
        cin>>a>>b;
        w[a]++;
        w[b]++;
        graph[a].insert(b);
        graph[b].insert(a);
        
    }

    
    
    
    for(int i = 1; i <= v; i++){
        if(used[i]) continue;
        dfs(used, graph, i);
        int vertices = q.size();
        int edges = 0;
        while(!q.empty()){
            edges += w[q.front()];


            q.pop();
        }
        edges /= 2;
        if(edges != vertices){
            cout << "No" << ENDL;
            endd
        }
        

    }
    cout <<"Yes" << ENDL;


    endd
}

