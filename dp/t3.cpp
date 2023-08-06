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

    int nn;
    cin>>nn;
    while(nn--){
        int n;
        cin>>n;
        if(n != 1 and n % 2 != 0){
            cout << -1 << ENDL;
            continue;
        }
        cout << n << " ";
        for(int i = 1; i < n; i++){
            if(i % 2 == 0){
                cout << i << " ";
            } else{
                cout << n - i << " ";
            }
        }
        cout << ENDL;
    }
    


    endd
}

