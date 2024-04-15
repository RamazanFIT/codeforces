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

    int t;
    cin>>t;
    while(t--){
        int size;
        cin>>size;
        int color;
        cin>>color;
        vector<vector<int>> massive(color);
        for(int i = 0; i < color; i++){
            massive[i].push_back(0);
        }
        for(int i = 0; i < size; i++){
            int a;
            cin >> a;
            massive[a - 1].push_back(i);
        }
        for(int i = 0; i < color; i++){
            
            massive[i].push_back(size - 1);
        }
        int ans = INT_MAX;
        for(int i = 0; i < color; i++){
            int max_ = INT_MIN;
            for(int j = 0; j < massive[i].size() - 1; j++){
                int h = massive[i][j + 1] - massive[i][j];
                if(h % 2 == 0) h++;
                max_ = max(max_, (h - 1));
            }
            ans = min(ans, max_ / 2);
            // cout << max_ / 2 << ENDL;
        }
        cout << ans << ENDL;
        // for(int i = 0; i < color; i++){
        //     for(int j = 0; j < massive[i].size(); j++){
        //         cout << massive[i][j] << " ";
        //     }
        //     cout << ENDL;
        // }
        // cout <<"FEF\n";
    }
    


    endd
}

