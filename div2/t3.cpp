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

    int size;
    cin>>size;
    while(size--){
        int n,m,k,H;
        cin >> n >> m >> k >> H;
        unordered_set<int> set_;
        for(int i = 1; i < m; i++){
            set_.insert(i);
        }
        vector<int> massive(n);
        int ans = 0;
        for(int i = 0; i < n; i++){
            cin >> massive[i];
            if(abs(massive[i] - H) % k == 0){
                if(set_.find(abs(massive[i] - H) / k) != set_.end()){
                    ans++;
                }
            }
        }
        cout << ans << ENDL;
    }
    


    endd
}

