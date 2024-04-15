#include <bits/stdc++.h>
#define ENDL "\n"
#define ff first 
#define ss second  
#define all(x) (x).begin(), (x).end()
#define endd return 0;
#define goodluck ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;       
using vertex_t = int32_t;
using ll = long long;



class Graph1{
private:

    vertex_t vertex_number = 0;
    vertex_t edges_number = 0;
    set<pair<vertex_t, vertex_t>> set_of_edges;

public:


    
    
    void input(){
        cin >> vertex_number;
        cin >> edges_number;
        set_of_edges.clear();
        for(vertex_t i = 0; i < edges_number; i++){
            vertex_t a, b;
            cin >> a >> b;
            set_of_edges.insert({a, b});

        }
    }

    void print() const {
        cout << "VERTEX NUMBER: " << vertex_number << ENDL;
        for(auto it = set_of_edges.begin(); it != set_of_edges.end(); it++) cout << it->first << " " << (*it).second << ENDL; 
    }
};



signed main(){
    
    goodluck

    Graph1 g1;
    g1.input();
    g1.print();
    



    

    endd
}

