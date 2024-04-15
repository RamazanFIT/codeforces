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
    int n, m;
    cin>>n>>m;
    int w[n];
    int a[m];
    for(int i = 0; i < n; i++) cin>>w[i];
    for(int i = 0; i < m; i++) cin>>a[i];
    
    int ind1 = 0;
    int ind2 = 0;
    while(ind1 < n and ind2 < m){
        if(w[ind1] <= a[ind2]){
            cout << w[ind1] << " ";
            ind1++;
        } else{
            cout << a[ind2] << " ";
            ind2++;
        }
    }
    for(int i = ind1; i < n; i++){
        cout << w[i] << " ";
    }
    for(int i = ind2; i < m; i++){
        cout << a[i] << " ";
    }
    
    


    endd
}

