#include <bits/stdc++.h>
#define ENDL "\n"
#define ff first 
#define ss second  
#define all(x) (x).begin(), (x).end()
#define endd return 0;
#define vec vector
#define goodluck ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using ll = long long;
using namespace std;
//level = 1


signed main(){
    
    goodluck
    freopen("comb.in", "r", stdin);
    freopen("comb.out", "w", stdout);

    int n, k, c;
    cin>>n>>k>>c;
    vec<bool> bolean(n, 1);
    for(int i = 0; i < k; i++) bolean[i] = 0;
   
    for(int i = 0; i < c; i++){
        if(!next_permutation(all(bolean))) break;
    }
    for(int i = 0; i < n; i++){
        if(!bolean[i]) cout << i + 1 << " ";
    }
    cout << ENDL;
    
    
    

    endd
}

