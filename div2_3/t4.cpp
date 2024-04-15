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
    int n;
    cin>>n;
    int w[n];
    for(int i = 0; i < n; i++){
        w[i] = i + 1;
    }
    int anss = INT_MIN;
    do
    {
        int ans = 0;
        int min_ = INT_MIN;
        for(int i = 0; i < n; i++){
            min_ = max(min_, (i + 1) * w[i]);
            ans += (i + 1) * w[i];
        }
        if(ans - min_ == 2529) break;
    } while (next_permutation(w, w + n));
    
    for(int i = 0; i < n; i++) cout << w[i] << " ";
    


    endd
}

