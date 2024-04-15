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

    int c;
    cin>>c;
    while(c--){
        set<int> set_;
        int n;
        cin>>n;
        for(int i = 1; i <= n; i++) set_.insert(i);
        int w[n];
        for(int i = 0; i < n; i++) cin >> w[i];
        int ans_left = 0;
        int ans_right = n - 1;
        bool flag = true;
        while(true){
            
            int i = ans_left;
            while(true){
                if(set_.size() == 0){
                    break;
                }
                int min_ = *set_.begin();
                auto it = set_.end();
                it--;
                int max_ = *it;
                if(w[i] == min_ or w[i] == max_){
                    set_.erase(w[i]);
                    i++;
                } else{
                    break;
                }
            }
            if(set_.size() == 0){
                cout << -1 << ENDL;
                flag = false;
                break;
            }
            ans_left = i;
            i = ans_right;
            while(true){
                if(set_.size() == 0){
                    break;
                }
                int min_ = *set_.begin();
                auto it = set_.end();
                it--;
                int max_ = *it;
                if(w[i] == min_ or w[i] == max_){
                    set_.erase(w[i]);
                    i--;
                } else{
                    break;
                }
            }
            if(set_.size() == 0){
                cout << -1 << ENDL;
                flag = false;
                break;
            }
            ans_right = i;
            auto it = set_.end();
            it--;
            int max_ = *it;
            int min_ = *set_.begin();
            if(w[ans_left] != max_ and w[ans_left] != min_ and w[ans_right] != max_ and w[ans_right] != min_){
                break;
            }
        }


        if(flag)
        cout << ans_left + 1<< " " << ans_right  + 1<< ENDL;
        

    }

    endd
}

