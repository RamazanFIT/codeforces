#include <bits/stdc++.h>
#define ENDL "\n"
#define ff first 
#define ss second  
#define all(x) (x).begin(), (x).end()
#define endd return 0;
#define int ll
#define goodluck ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using ll = long long;
using namespace std;

signed main(){
    
    goodluck
    // freopen("std.in", "r", stdin);
    // freopen("sdt.out", "w", stdout);

    int nnn;
    cin>>nnn;
    while(nnn--){
        int n;
    cin>>n;
    int k;
    cin>>k;
    vector<int> div;
    for(int i = 1; i < sqrt(n); i++){
        if(n % i == 0){
            div.push_back(i);
            div.push_back(n / i);
        }
    }
    if(n % int(sqrt(n)) == 0){
        div.push_back(sqrt(n));
    }
    sort(all(div));
    int ans;
    for(int i = div.size() - 1; i >= 0; i--){
        if(div[i] <= k){
            ans = n / div[i];
            break;
        }
    }
    cout << ans << ENDL;
    }
    


    endd
}

