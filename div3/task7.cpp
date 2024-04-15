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

    int size;
    cin>>size;
    while(size--){
        int n;
        cin>>n;
        int k = ((n * n) / 4);
        int cnt = k / 2;
        if(k % 2 != 0) cnt++;
        int alice = cnt * 4;
        int bob = n * n - alice;
        if(alice == bob){
            cout << "Draw" << ENDL;
        } else if(alice > bob) cout << "Alice" << ENDL;
        else cout << "Bob" << ENDL;
    }
    


    endd
}

