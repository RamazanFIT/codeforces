#include <bits/stdc++.h>
#define ENDL "\n"
#define ff first 
#define int ll
#define ss second  
#define all(x) (x).begin(), (x).end()
#define endd return 0;
#define goodluck ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using ll = unsigned long long;
using namespace std;

signed main(){
    
    goodluck

    int n, k;
    cin>>n>>k;
    unordered_set<int> set_;
    
    unordered_set<int> new1;
    for(int i = 0; i < n; i++){
        int a;
        cin>>a;
        set_.insert(a);
        new1.insert(a);
    }
    while(true){
        if(set_.size() >= k){
            break;
        }
        // int ended = set_.size();
        // int cnt1 = 0;
        // auto it = set_.begin();
        // while(true){
        //     if(cnt1 >= ended) break;
        //     int cnt2 = 0;
        //     auto its =  it;
        //     while(true){
        //         if(cnt2 >= ended) break;
        //         set_.insert((*it) + (*its));
        //         cnt2++;
        //         its++;
        //     }
        //     it++;
        //     cnt1++;
        vector<int> copy(set_.size());
        int ind = 0;
        for(auto it : set_){
            copy[ind] = it;
            ind++;
        }
        int M = set_.size();
        unordered_set<int> to_c;
        for(int i = 0; i < M;i++){
            for(int j = 0; j < new1.size(); j++){
                set_.insert(copy[i] + copy[j]);
                to_c.insert(copy[i] + copy[j]);
            }
        }
        new1 = to_c;
        
        // std::cout << set_.size() << " ";
    }
    // k--;
    // auto ans = set_.begin();
    // for(int i = 0; i < k; i++){
    //     ans++;
    // }
    // std::cout << *ans;

    vector<int> ans(set_.size());
    int ind = 0;
    for(auto it1 = set_.begin(); it1 != set_.end(); it1++){
        ans[ind] = *it1;
        ind++;
        // cout << *it1 << " ";
    }
    sort(ans.begin(), ans.end());
    cout << ans[k - 1];
    
    endd
}

