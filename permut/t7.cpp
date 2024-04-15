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
    freopen("success.in", "r", stdin);
    freopen("success.out", "w", stdout);
    
    int n;
    cin>>n;
    vector<int> vec(n);
    vector<int> sh(n);
    for(int i = 0; i < n; i++){
        cin >> vec[i];
        sh[i] = n - i;
    }
    if(sh != vec){
        next_permutation(all(vec));
        for(int i=0;i<n;i++) cout << vec[i] << " ";
    } else{
        for(int i=0;i<n;i++) cout << sh[n - i - 1] << " ";
        
    }
    


    endd
}

