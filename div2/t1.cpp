#include <bits/stdc++.h>
#define ENDL "\n"
#define int ll
#define ff first 
#define ss second  
#define all(x) (x).begin(), (x).end()
#define endd return 0;
#define goodluck ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using ll = unsigned long long;
using namespace std;

signed main(){
    
    goodluck

    int nn;
    cin>>nn;
    while(nn--){
        int n;
        cin>>n;
        int a = 1, b = 1;
        int cnt = 0;
        for(int i = 0; i < n; i++){
            int z;
            cin>>z;
            a *= z * (i + 1);
            b *= 2;
        }
        
        int i = 1;

        if( a % b != 0){
            cout << -1 << ENDL;
            continue;
        }
        
        while(i <= n){
            if((a / i) % b == 0){
                a /= i;

            } else{
                cnt++;
                
            }
            i++;
        }
    
        cout << cnt << ENDL;
    }
    


    endd
}

