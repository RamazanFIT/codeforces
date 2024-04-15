#include <bits/stdc++.h>
#define ENDL "\n"
#define ff first 
#define ss second  
#define all(x) (x).begin(), (x).end()
#define endd return 0;
#define goodluck ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using ll = long long;
using namespace std;

signed main(){
    
    goodluck
    // freopen("std.in", "r", stdin);
    // freopen("sdt.out", "w", stdout);

    
    multimap<int, int> mapa;

    mapa.insert({1, 2});
    mapa.insert({1, 3});
    mapa.insert({2, 3});
    mapa.insert({3, 3});
    mapa.insert({7, 3});
    mapa.insert({0, 3});
    mapa.insert({13, 3});
    // mapa.erase(1);
    auto it =mapa.begin();
    it++;
    mapa.erase(it);
   
    // cout << mapa.lower_bound(1)->first;
    for(auto it : mapa) cout << it.first << " " << it.second << ENDL;
    // map<int, int> mapa;
    // cout << mapa.begin()->first <<"ewfewf";
    // mapa[1] = 1;
    // mapa[3] = 1;
    // mapa[5] = 1;
    // mapa[7] = 1;
    // mapa[9] = 1;
    // cout << mapa.upper_bound(-111111111)->first;
    endd
}

