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
    int n;
    cin>>n;
    vector<int> massive(n);
    for(int i = 0; i < n; i++) cin>>massive[i];
    

    for(int i = 0; i <= n; i++){
        vector<bool> bolean(n, 0);
        for(int j = n - 1; j > n - 1 - i; j--){
            bolean[j] = 1;
        }
        do
        {
            int sum_ = 0;
            for(int j = 0; j < n; j++){
                if(bolean[j]){
                    sum_ += massive[j];
                } else sum_ -= massive[j];
            }
            if(sum_ % 360 == 0){
                cout << "YES";
                endd
            }
        } while (next_permutation(all(bolean)));
        
    }

    cout << "NO" << ENDL;
    
    


    endd
}
