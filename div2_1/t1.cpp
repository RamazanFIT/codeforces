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

    int k;
    cin>>k;
    while(k--){
        int n;
    cin>>n;
    vector<int> massive(n);
    vector<int> sorted(n);
    for(int i = 0; i < n; i++){
        cin>>massive[i];
        sorted[i] = massive[i];
    }
    sort(all(sorted));
    int ind = n;
    for(int i = n - 1; i >= 0; i--){
        if(sorted[i] != massive[i]){
            break;
        } else{
            ind = i;
        }
    }
    // cout << sorted[ind - 1] << ENDL;
    if(ind == 0){
        cout << 0 << ENDL;
    } else{
        cout << sorted[ind - 1] << ENDL;
    }
    }
    


    endd
}

