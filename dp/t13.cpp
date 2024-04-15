#include <bits/stdc++.h>
#define ENDL "\n"
#define ff first 
#define ss second  
#define all(x) (x).begin(), (x).end()
#define endd return 0;
#define goodluck ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using ll = long long;
using namespace std;

uint16_t w[10001][10001];

signed main(){
    
    goodluck
    // freopen("longpath.in", "r", stdin);
    // freopen("longpath.out", "w", stdout);

    int v, n;
    cin >> v >> n;
    for(int i = 1; i <= n; i++){
        int a, b;
        cin >> a >> b;
        w[a][b]++;
    }
    


    endd
}

