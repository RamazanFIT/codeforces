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

    int j;
    cin>>j;
    while(j--){
        int n;
        cin>>n;
        int k;
        cin>>k;
        int max_ = INT_MIN;
        vector<int> massive(n);
        for(int i = 0; i < n; i++){
            cin>>massive[i];
            max_=max(max_, massive[i]);
        }
        while(k > 0){
            bool flag = true;
            for(int i = n - 1; i >= 1; i--){
                if(k <= 0) break;
                if(massive[i] >= massive[i - 1]){
                    massive[i - 1]++;
                    max_ = max(max_, massive[i - 1]);
                    k--;
                    flag = false;
                    break;
                }
            }
            if(flag){
                break;
            }
        }
        cout << max_<<ENDL;
    }
    
    
    


    endd
}

