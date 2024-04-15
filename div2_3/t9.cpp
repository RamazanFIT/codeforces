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
    int n, sum;
    cin>>n >> sum;
    int w[n];
    int first_ind = 0;
    int tmp_sum = 0;
    int ans = 0;
    int anss = INT_MAX;
    for(int i = 0; i < n; i++) cin >> w[i];
    for(int i = 0; i < n; i++){
        if(tmp_sum + w[i] < sum){
            ans++;
            tmp_sum += w[i];
        } else{
            ans++;
            anss = min(anss, ans);
            tmp_sum += w[i];
            while(tmp_sum > sum){
                ans--;
                tmp_sum -= w[first_ind];
                first_ind++;
            }
            
        }
        
    }
    if(anss !=INT_MAX)
    cout << anss << ENDL;
    else cout << -1 <<ENDL;
    
    


    endd
}

