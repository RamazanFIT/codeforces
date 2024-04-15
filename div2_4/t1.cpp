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

    int n;
    cin>>n;
    while(n--){
        int a, b, c;
        cin>>a>>b>>c;
        if(c % 2 == 0){
            if(a > b){
                cout << "First" << ENDL;
            } else cout << "Second" << ENDL;
        } else{
            if(b > a){
                cout << "Second" << ENDL;
            } else cout << "First" << ENDL;
        }
    }
    


    endd
}

