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
        set<int> set_;
        map<int, int> mapa;
        int prev = 0;
        for(int i = 0; i < n; i++){
            int a;
            cin>>a;
            mapa[a]++;
            set_.insert(a);
            prev = min(prev, a);
        }
        prev--;
        vector<int> massive(set_.size());
        int cnt = 0;
        for(auto it : set_){
            massive[cnt] = it;
            cnt++;
        }
        int min_ = INT_MAX;
        int max_ = INT_MIN;
        int ans = 0;
        while(true){
            bool flag = true;
            for(auto it = mapa.begin(); it != mapa.end(); it++){
                if(it->second >= 1) flag = false;
                auto c = it;

                c++;
                // cout << c->first << " E";
                if(c->first - it->first == 1){
                    mapa[it->first]--;
                    cout << c->first << " " << it->first << ENDL;
                } else{
                    ans++;
                    mapa[it->first]--;
                }
            }
            if(flag) break;
        }
        cout << ans << ENDL;

    }
    


    endd
}

