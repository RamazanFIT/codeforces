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
    map<int, int> mapa;
    for(int i = 0; i < n; i++){
        int a;
        cin>>a;
        mapa[a]++;
    }
    int D = 1 + 8 * n;
    int x = (1 + sqrt(D)) / 2;
    

    endd
}

