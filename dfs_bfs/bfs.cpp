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
            sets_of_neighbour[a].insert(b);
            
            sets_of_neighbour[b].insert(a);
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


void just_bfs(const Graph &graph, 
            vertex_t start_vertex,
            vector<bool> &used,
            vertex_t start
){
    queue<vertex_t> fired;
    fired.push(start);
    used[start] = true;
    cout << start << " ";
    while(not fired.empty()){
        int v = fired.front();
        // cout << v << " ";
        fired.pop();
        for(auto it : graph.sets_of_neighbour[v]){
            if(not used[it]){
                cout << it << " ";
                used[it] = true;
                fired.push(it);
            }
        }
    }
    

    

}


signed main(){
    
    // goodluck
    // freopen("std.in", "r", stdin);
    // freopen("sdt.out", "w", stdout);

    Graph g;
    g.input();
    g.output();
    cout << "Enter a start vertex: " << ENDL;
    vertex_t start;
    cin>>start;
    vector<bool> bolean(g.vertex_number, 0);
    just_bfs(g, start, bolean, start);
    
    


    endd
}

