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

    int k;cin>>k;
    while(k--){
        int n;
        int c;
        cin>>n>>c;
        vector<int> massive(n);
        int max_ = INT_MIN;
        for(int i = 0; i < n; i++){
            cin>>massive[i];
            max_ = max(max_, massive[i]);
        }
        while(true){
            if(c <= 0){
                break;
            }
            for(int i = n - 1; i >= 1; i--){
                
                    // int b = massive[i - 1];
                    // if(massive[i] + 1 - massive[i - 1] <= c){
                    //     massive[i - 1] = massive[i] + 1;
                    //     c -= massive[i] - b + 1;
                    //     max_ = massive[i - 1];
                    // } else if(massive[i] - massive[i - 1] <= c){
                    //      massive[i - 1] = massive[i] - b;
                    //     c -= massive[i];
                    //     // max_ = massive[i - 1];
                    // } else{
                    //     massive[i - 1] += c;
                    //     c = 0;
                        
                    // }

                    if(massive[i] > massive[i - 1]){
                        
                    }
                
            }
            c--;
        }
        sort(all(massive));
        cout << massive[n - 1] << ENDL;

    }
    


    endd
}

