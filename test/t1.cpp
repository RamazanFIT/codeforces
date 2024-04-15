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

    int n;
    cin>>n;
    vector<pair<int, int>> massive(n);
    // for(auto &it : massive){
    //     cin>>it;
    //     it = 17;
    // }
    for(auto it = massive.begin(); it != massive.end(); it++){
        cin >> it->first;
        cin>>it->second;
    }
    for(auto it : massive) cout << it.first << " " << it.second << "      ";


    endd
}

