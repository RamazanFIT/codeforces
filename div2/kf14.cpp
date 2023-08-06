#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int size;cin>>size;
    while(size--){
        int massive[12];
        for(int i = 0; i < 12; i++){
            massive[i] = INT_MAX;
        }
        int some_size;cin>>some_size;
        for(int i = 0; i < some_size; i++){
            int a;
            cin >> a;
            int bin;
            cin >> bin;
            massive[bin] = min(massive[bin], a);
        }
        for(int i = 0; i < 12; i++){
            if(massive[i] == INT_MAX) massive[i] = 0;
        }
        int f1 = massive[10] + massive[1];
        int f2 = massive[11];
        if(massive[10] == 0 or massive[1] == 0) f1 = INT_MAX;
        if(f2 == 0){
            f2 = INT_MAX;
        }
        int ans = min(f1, f2);
        if(ans == INT_MAX){
            cout << -1 << "\n";
        } else{
            cout << ans << "\n";
        }
      
    }
    


}

