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

// map<pair<int, int>, int> mapa;
int mapa[1002][1002];
unordered_map<int, vector<int>> graph;
vector<int> path;

void rec(int vert, int len, bool * used, int * L, int ott){
    // cout << vert << " ";
    if(vert == ott) return;
    for(int i = 0; i < graph[vert].size(); i++){
        if(used[graph[vert][i]]) continue;
        if(len - mapa[vert][graph[vert][i]] == L[graph[vert][i]]){
            path.push_back(graph[vert][i]);
            used[vert] = true;
            rec(graph[vert][i], L[graph[vert][i]], used, L, ott);
            return;
        }
    }
}


signed main(){
    
    goodluck
    freopen("dijkstra.in", "r", stdin);
    freopen("dijkstra.out", "w", stdout);
    
    int v;
    int m;
    cin >> v;
    int ot, doo;
    cin>>ot>>doo;
    // for(int i = 0; i < m; i++){
    //     int a, b, w;
    //     cin >> a >> b >> w;
    //     mapa[{a, b}] = w;
    //     mapa[{b, a}] = w;
    //     graph[a].push_back(b);
    //     graph[b].push_back(a);
        
    // }
    for(int i = 1; i <= v; i++){
        for(int j = 1; j <= v; j++){
            int w;
            cin>>w;
            if(w >= 0) {
                mapa[i][j] = w;
                // mapa[{b, a}] = w;
                graph[i].push_back(j);
                // graph[b].push_back(a);
            }
        }
    }

    bool used[v + 1] = {0};
    int L[v + 1];
    
    for(int i = 1; i <= v; i++) L[i] = LONG_LONG_MAX;
    L[ot] = 0;
    // priority_queue<int> q;
    set<int> set_;
    // q.push(1);
    set_.insert(ot);
    // for(int i = 1; i < v; i++){
    //     int lenght = LONG_LONG_MAX;   
    //     int vertice;
    //     for(int j = 1; j <= v; j++){
    //         if(used[j]) continue;
    //         if(L[j] <= lenght){
    //             vertice = j;
    //             lenght = L[j];
    //         }
    //     }
    //     for(int j = 0; j < graph[vertice].size(); j++){
    //         if(L[vertice] + mapa[{vertice, graph[vertice][j]}] < L[graph[vertice][j]]){
    //             L[graph[vertice][j]] = L[vertice] + mapa[{vertice, graph[vertice][j]}];
    //         }
    //     }
    //     used[vertice] = true;
    // } 
    while(!set_.empty()){
        // int vertice = q.top();
        // q.pop();
        auto it = set_.end();
        it--;
        int vertice = *it;
        set_.erase(vertice);
        for(int j = 0; j < graph[vertice].size(); j++){
            if(L[vertice] + mapa[vertice][graph[vertice][j]] < L[graph[vertice][j]]){
                L[graph[vertice][j]] = L[vertice] + mapa[vertice][graph[vertice][j]];
                // q.push(graph[vertice][j]);
                set_.insert(graph[vertice][j]);
            }
        }
    }
    // cout << L[doo];
    
    // path.push_back(doo);
    
    // rec(doo, L[doo], used, L, ot);
    if(L[doo] == LONG_LONG_MAX){
        cout << -1 << ENDL;
        return 0;
    }
    cout << L[doo] << ENDL;
    // for(int i = path.size() - 1; i >= 0; i--){
    //     cout << path[i] <<" ";
    // }
    


    endd
}

