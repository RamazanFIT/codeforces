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
    freopen("perm.in", "r", stdin);
    freopen("perm.out", "w", stdout);

    int n;
    cin>>n;
    vector<int> massive(n);
    // do{
        for(int i = 1; i <= n; i++ ) massive[i - 1] = i;
        
    for(int i = 0; i < n; i++) cout << massive[i] << " ";
    cout << ENDL;
    
    // while(next_permutation(all(massive)));
    // next_permutation(all(massive));
    while(next_permutation(all(massive))){
        for(int i = 0; i < n; i++) cout << massive[i] << " ";
    cout << ENDL;
    }

    endd
}

