#include <bits/stdc++.h>
// #define ll long long
#define endl "\n"
#define int ll
#define all(b) (b).begin(), (b).end() 
#define for(a, b, c) for(ll i = a; i < b; i += c)
#define goodluck ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using ll = long long;
using namespace std;


signed main(){
    goodluck
    
    int size;
    cin>>size;
    while(size--){
        int some_size;
        cin>>some_size;
        int group;
        cin>>group;
        ll ans = 0;
        vector<ll> massive(some_size - 1);
        ll f;cin>>f;
        for(0, some_size - 1, 1){
            ll a;
            cin >> a;
            massive[i] = abs(a - f);
            f = a;
            ans += massive[i];
        }
        // sort(massive.begin(), massive.end());
        sort(all(massive));
        group--;
        int cnt = 0;
        while(group--){
            ans -= massive[some_size - 2 - cnt];
            cnt++;
        }
        cout << ans << "\n";
    }
    


}

