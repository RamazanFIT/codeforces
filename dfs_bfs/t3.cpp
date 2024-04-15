#include <bits/stdc++.h>
#define ENDL "\n"
#define ff first 
#define ss second  
#define all(x) (x).begin(), (x).end()
#define endd return 0;
#define vertex_t int
#define goodluck ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using ll = long long;
using namespace std;


class Graph{
public:
    int vertex_number = 0;
    int edges_number = 0;
    //список смежности для каждой вершины(просто соседи какого-то vertex)
    vector<set<vertex_t>> sets_of_neighbour;
    void input(){
        cin>>vertex_number>>edges_number;
        sets_of_neighbour.clear();
        sets_of_neighbour.resize(vertex_number);
        for(int i = 0; i < edges_number; i++){
            vertex_t a, b;
            cin>>a>>b;
            sets_of_neighbour[a - 1].insert(b - 1);
            
            sets_of_neighbour[b - 1].insert(a - 1);
        }   

    }

    void output() const{
        cout << "Number of vertex: " << vertex_number << ENDL;
        cout << "Number of edges: " << edges_number << ENDL;
        for(int i = 0; i < vertex_number; i++){
            cout << i << " : [";
            for(auto neighbour : sets_of_neighbour[i]){
                cout << neighbour << " ";
            }
            cout << "]"<< ENDL;
        }
    }
    


};


void just_dfs(const Graph &graph, 
            vertex_t start_vertex,
            vector<bool> &used 
){
    used[start_vertex] = 1;
    // cout << start_vertex << " ";
    for(auto neighbour : graph.sets_of_neighbour[start_vertex]){
        if(not used[neighbour]){
            just_dfs(graph, neighbour, used); 
            // used[neighbour] = false;
        }
    }

}


signed main(){
    
    goodluck
    // freopen("std.in", "r", stdin);
    // freopen("sdt.out", "w", stdout);

    int c;
    cin>>c;
    while(c--){
        Graph g;
        g.input();
        // g.output();
        // cout << "Enter a start vertex: " << ENDL;
        
        vector<bool> bolean(g.vertex_number, 0);
        // just_dfs(g, start, bolean);
        int ans = 0;
        for(int i = 0; i < g.vertex_number; i++){
            if(!bolean[i]){
                ans++;
                just_dfs(g, i, bolean);
            }
        }
        cout << ans << ENDL;
    }
    
    


    endd
}

