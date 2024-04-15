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

    int size;cin>>size;
    ll sum = 0;
    ll max_el = INT64_MIN;
    ll min_el = INT64_MAX;
    vector<ll> massive(size);
    for(int i = 0; i < size; i++){
        
        cin >> massive[i];
        
    }
    
    sort(all(massive));
    int k = size / 2;
    // if(size % 2 != 0) k++;
    ll ans = 0;
    for(int i = 0; i < size; i++){
        ans += abs(massive[i] - massive[k]);
    }
    cout << ans << ENDL;

    endd
}

