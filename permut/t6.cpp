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
    freopen("inverse.in", "r", stdin);
    freopen("inverse.out", "w", stdout);

    int n;
    cin >> n;
    int w[n + 1];
    for(int i = 0; i < n; i++){
        int a;
        cin>>a;
        w[a] = i + 1;
    }
    for(int i = 1; i <= n; i++){
        cout << w[i] << " ";
    }
    


    endd
}

