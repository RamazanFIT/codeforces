#include <bits/stdc++.h>
#define ENDL "\n"
#define ff first 
#define ss second  
#define all(x) (x).begin(), (x).end()
#define endd return 0;
#define goodluck ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using ll = long long;
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<pair<int, int>> massive(n);
    for(int i = 0; i < n; i++){
        int a;
        cin>>a;
        massive[i] = {a, i};
    }
    int current = 0;
    // sort(all(massive),reverse);
    sort(massive.rbegin(), massive.rend());
    for(int i = 1; i < n; i++){
        if(massive[current].first==0){
            for(int j = current + 1; j < n; j++){
                if(massive[j].first >= 1){
                    current = j;
                    break;
                }
            }
        }
        if(massive[current].first != 0){
            massive[current].first--;
            massive[i].first--;
        } else{
            break;
        }
    }
    for(int i = 0; i < n; i++){
        if(massive[i].first != 0){
            cout << "NO" << ENDL;
            return;
        }
    }
    cout << "YES" << ENDL;

}




signed main(){
    
    goodluck
    // freopen("std.in", "r", stdin);
    // freopen("sdt.out", "w", stdout);

    int n;
    cin>>n;
    while(n--) solve();
    


    endd
}

