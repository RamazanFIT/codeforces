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
        int n;
        cin>>n;
        vector<int> massive;
        set<int> set_;
        for(int i = 0; i < n; i++){
            // cin >> massive[i];
            int a;
            cin>>a;
            if(a <= n){
            massive.push_back(a);
            set_.insert(a);
            }
        }
        if(n == 1 or set_.size() == 0){
            cout << 0 << ENDL;
            continue;
        }
        int ans = 0;
        sort(all(massive));
        int h = 1;
        auto it = set_.begin();
        while(h <= n){
            h *= *it;
            // cout << h << ENDL;
            it++;
        }
        --it;
        
        
        for(int i = h/ * it; i <= n; i++){
            int k = 0;
            for(int j = 0; j < massive.size(); j++){
                if(massive[j] > i) break;
                if(i % massive[j] == 0) k++;
            }
            ans = max(ans, k);
        }
        cout << ans << ENDL;
    }


    endd
}

