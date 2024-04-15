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

    int c;
    cin >> c;
    while(c--){
        int size;
        cin>>size;
        int color;
        cin>>color;
        vector<int> massive(size);
        bool w[color + 1];
        int last[color + 1];
        
        map<int, pair<int, int>> jojo;
        for(int i = 1; i <= color; i++){
            w[i] = false;
            jojo[i] = {INT_MIN, INT_MAX};
        
        }
        for(int i = 0; i < size; i++){
            cin >> massive[i];
          
        }
        int start[color];
        for(int i = 0; i < size; i++){
            // cin >> massive[i];
            if(w[massive[i]]){
                int max_ = max(jojo[massive[i]].first, i - last[massive[i]] - 1);
                int min_ = min(jojo[massive[i]].second, i - last[massive[i]] - 1);
                jojo[massive[i]] = {max_, min_};
                last[massive[i]] = i;
            } else{
                last[massive[i]] = i;
                w[massive[i]] = true;
                start[massive[i]] = i;
                // jojo[massive[i]] = {i, i};
                // if(koko[massive[i]] != 0) continue;
                // if(i <= size / 2){
                //     jojo[massive[i]] = {size - i - 1, size - i - 1};
                // } else{
                //     jojo[massive[i]] = {i - 1, i - 1};
                // }
            }
        }
        // for(auto it : jojo){
        //     if(it.second.first == INT_MIN){
        //         int tmp1 = size - 1 - last[it.first];
        //         tmp1 /= 2;
        //         jojo[it.first] = {tmp1, tmp1};
        //     }
        // }
        // for(int i = 0; i < size; i++){
        //     if(jojo[massive[i]].first != INT_MIN) continue;
        //     if(i <= size / 2) {int max_ = max(jojo[massive[i]].first, size - last[massive[i]] - 1);
        //     int min_ = min(jojo[massive[i]].second, size - last[massive[i]] - 1);
        //     jojo[massive[i]] = {max_, min_};}
        //     else{
        //         int max_ = max(jojo[massive[i]].first, last[massive[i]] - 1);
        //         int min_ = min(jojo[massive[i]].second, last[massive[i]] - 1);
        //         jojo[massive[i]] = {max_, min_};
        //     }
        //     // last[massive[i]] = i;
        // }
        int ans = INT_MAX;
        for(auto it : jojo){
            if(it.second.first == INT_MIN) continue;
            int q1 = start[it.first];
            q1 /= 2;

            int q2 = size - last[it.first] - 1;
            q2 /= 2;
            int tmp = it.second.first / 2;
            int max_max = max(q1, max(q2, max(tmp, it.second.second)));
            ans = min(ans, max_max);
            // cout << it.first << " " << "MAX" << it.second.first << " " << "MIN" << it.second.second << ENDL;
        }
        // cout << ans << ENDL;
        if(ans == INT_MAX){
            cout << (size - 1) / 2 << ENDL;
        } else cout << ans << ENDL;
        // cout << ENDL;
    }
    


    endd
}

