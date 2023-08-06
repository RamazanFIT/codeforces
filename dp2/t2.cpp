#include <bits/stdc++.h>
#define ENDL "\n"
#define ff first 
#define ss second  
#define int ll
#define all(x) (x).begin(), (x).end()
#define endd return 0;
#define goodluck ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using ll = long long;
using namespace std;

signed main(){
    
    goodluck
    // freopen("std.in", "r", stdin);
    // freopen("sdt.out", "w", stdout);

    int n;
    cin>>n;
    if(n == 0){
        cout << 1;
        return 0;
    }
    int dpp[n + 1];
    dpp[0] = 1;
    dpp[1] = 3;
    dpp[2] = 8;

    for(int i = 3; i <= n; i++){
        dpp[i] = dpp[i - 1] * 3 - dpp[i - 2];
       
    }

    cout << dpp[n] << ENDL;



    endd
}

