#include <bits/stdc++.h>
#define ENDL "\n"
#define ff first 
#define ss second  
#define all(x) (x).begin(), (x).end()
#define endd return 0;
#define int ll
#define mii map<int, int>
#define goodluck ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using ll = long long;
using namespace std;

signed main(){
    
    goodluck
    // freopen("std.in", "r", stdin);
    // freopen("sdt.out", "w", stdout);

    int n,m;
    cin>>n>>m;
    int w[n];
    int a[m];
    for(int i = 0; i < n; i++){
        cin>>w[i];
    }
    for(int i = 0; i < m; i++){
        cin>>a[i];
    }
    int ind1 = 0;
    int ind2 = 0;
    while(ind1 < n and ind2 < m){
        while(w[ind1] < a[ind2]) ind1++;
        cout << ind1 << " ";
        ind2++;
    }
    while(ind2 < m){
        cout << ind1 << " ";
        ind2++;
    }

    endd
}

