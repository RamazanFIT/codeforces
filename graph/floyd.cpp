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



signed main(){
    goodluck
    // freopen("std.in", "r", stdin);
    // freopen("sdt.out", "w", stdout);
    
    int v, e;

    cin >> v >> e;
    
    int graph[v + 1][v + 1];

    for(int i = 1; i <= v; i++){
        for(int j = 1; j <= v; j++){
            if(i == j) graph[i][j] = 0;
            else
            graph[i][j] = INT_MAX;
        }
    }
    
    for(int i = 0; i < e; i++){
        int a, b, w;
        cin>>a>>b>>w;
        graph[a][b] = w;
        graph[b][a] = w;
    }
    for(int k = 1; k <= v;k++){
        for(int i = 1; i <= v; i++){
            for(int j = 1; j <= v; j++){
                if(graph[i][j] > graph[i][k] + graph[k][j]){
                    graph[i][j] = graph[i][k] + graph[k][j];
                }
            }
        }
    }
    cout << " ";
    for(int i = 0; i < v; i++){
        cout << i << " ";
    }
    cout << ENDL;

    for(int i = 1; i <x= v; i++){
        cout << i - 1 << " ";
        for(int j = 1; j <= v; j++){
            cout << graph[i][j] << " ";
        }
        cout << ENDL;
    }

    endd
}

