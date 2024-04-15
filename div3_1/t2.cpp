#include <bits/stdc++.h>
#define ENDL "\n"
#define ff first 
#define ss second  
#define all(x) (x).begin(), (x).end()
#define endd return 0;
#define goodluck ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using ll = long long;
using namespace std;
// int mapa[10000000];
bool comp(pair<int, int> a, pair<int, int> b){
    if(a.first < b.first) return true;
    else return false;
}

void solve(){
    int n;
    cin>>n;
    vector<int> m1(n + 1);
    
    vector<int> m2(n + 1);

    for(int i = 1; i <= n; i++)cin>>m1[i];
    
    for(int i = 1; i <= n; i++)cin>>m2[i];

    vector<pair<int, int>> massive(n + 1);
    map<int, int> mapa;
    for(int i = 1; i <= n; i++){
        massive[i] = {m1[i] - m2[i], i};
        // mapa[m1[i] - m2[i]]++;
    }
    massive[0] = {INT_MIN, 0};
    sort(all(massive));
    
    vector<set<int>> graph(n + 1);
    int w[n + 1] = {0};
    // int b[]
    for(int i = n; i >= 1; i--){
        // graph[massive[i + 1]].insert(1);

        // graph[massive[i + 1].second].insert(massive[i].second);
        if(mapa.find(massive[i].first) != mapa.end())
        w[massive[i].second] += i - 1 + mapa[massive[i].first];
        else{
            w[massive[i].second] += i - 1;
        }
        // for(int j = i + 1; j <= n; j++){
        //     if(massive[j].first == massive[i].first) w[massive[i].second]++;
        //     else break;
        // }
        mapa[massive[i].first]++;


    }
    queue<int> p;
    for(int i = 1; i <= n; i++){
        if(w[i] == n - 1){
            p.push(i);
        }
    
    }
   
    cout << p.size() << ENDL;
    while(!p.empty()){
        cout << p.front()<< " ";
        p.pop();
    }
    cout << ENDL;
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

