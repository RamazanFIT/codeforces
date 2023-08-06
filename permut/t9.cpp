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

    vector<int> v{0,0,0,0,0,0,0,0,1,1,1, 1, 1, 1, 1, 1};
    for(int i = 0; i < 100000; i++) next_permutation(all(v));

    for(int i = 0; i < v.size(); i++) cout << v[i] << " ";
        cout << ENDL;
    
    


    endd
}

