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

    int n, alice;
    cin >> n >> alice;
    bool forward[n], back[n];
    for(int i = 0; i < n; i++){
        cin >> forward[i];
    }
    for(int i = 0; i < n; i++){
        cin >> back[i];
    }
    if(!forward[0]){
        cout << "NO" << ENDL;


    endd
    }
    for(int i = 0; i < n; i++){
        if(i + 1 >= alice and forward[i]){
            if(alice == i + 1){
                cout << "YES" << ENDL;
                return 0;
            } 
            if(back[i]){
                for(int j = i; j >= 0; j--){
                    if(back[j] and alice == j + 1){
                        cout << "YES" << ENDL;
                        return 0;
                    }
                }
            }
        }
    }
    cout << "NO" << ENDL;


    endd
}

