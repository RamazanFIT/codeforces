#include <bits/stdc++.h>
#define int ll
#define endl "\n"
#define goodluck ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using ll = long long;
using namespace std;

signed main(){
    
    goodluck
    

    int size;
    cin>>size;
    while(size--){
        int some_size;cin>>some_size;
        vector<int> massive(some_size);
        int b = 0;
        int cnt = 0;
        int min = INT64_MAX;
        for(int i = 0; i < some_size; i++){
            cin >> massive[i];
            min &= massive[i];
        }
        b = INT64_MAX;
        int k = b;
        if(min != 0){
            cout << 1 << endl;
            continue;
        }
        for(int i = 0; i < some_size; i++){
            
            k &= massive[i];
            if(k == min){
                cnt++;
                k = b;
      
            }
        }
        cout << cnt << "\n";
    }
    

}

