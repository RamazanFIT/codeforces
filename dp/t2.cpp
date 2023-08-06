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



class Graph2{
private:

    vertex_t vertex_number = 0;
    vertex_t edges_number = 0;
    // set<pair<vertex_t, vertex_t>> matrix;
    vector<vector<bool>> matrix;

public:


    
    
    void input(){
        cin >> vertex_number;
        cin >> edges_number;
        matrix.clear();
        // matrix.resize(vertex_number);
        // for(vertex_t i = 0; i < vertex_number; i++){
        //     matrix[i].resize(vertex_number, false);
        // }
        matrix.resize(vertex_number, vector<bool>(vertex_number, 0));
        for(vertex_t i = 0; i < edges_number; i++){
            vertex_t a, b;
            cin >> a >> b;
            matrix[a][b] = 1;

        }
    }

    void print() const {
        cout << "VERTEX NUMBER: " << vertex_number << ENDL;
        // for(auto it = matrix.begin(); it != matrix.end(); it++) cout << it->first << " " << (*it).second << ENDL; 
        for(vertex_t i = 0; i < vertex_number; i++){
            for(vertex_t j = 0; j < vertex_number; j++){
                cout << matrix[i][j] << " ";
            }
            cout << ENDL; 
        }
        cout << ENDL;
    }
};



signed main(){
    
    goodluck

    Graph2 g1;
    g1.input();
    g1.print();
    



    

    endd
}

