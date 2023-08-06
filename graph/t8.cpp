#include <bits/stdc++.h>
#define ENDL "\n"
#define ff first 
#define ss second  
#define all(x) (x).begin(), (x).end()
#define endd return 0;
#define int ll
#define goodluck ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using ll = long long;
using namespace std;

signed main(){
    
    goodluck
    // freopen("std.in", "r", stdin);
    // freopen("sdt.out", "w", stdout);

    int nnn;
    cin>>nnn;
    while(nnn--){
        int n;
        cin>>n;
        int w[n];
        for(int i = 0; i < n; i++){
            cin >> w[i];
        }
        sort(w, w + n);
        int alice = 0;
        int bob = 0;
        bool flag = true;
        for(int i = n - 1; i >= 0; i--){
            // cout << w[i] << " ";
            if(w[i] % 2 == 0 and flag){
                alice += w[i];
                flag = false;
            } else if(w[i] % 2 != 0 and flag){
                flag = false;
            } else if(w[i] % 2 != 0 and flag == false){
                bob += w[i];
                flag = true;
            } else if(w[i] % 2 == 0 and flag == false){
                flag = true;
            }
        }

        if(alice > bob){
            cout << "Alice" << ENDL;
        } else if(bob > alice){
            cout << "Bob" << ENDL;
        } else{
            cout << "Tie" << ENDL;
        }
    }
    


    endd
}

