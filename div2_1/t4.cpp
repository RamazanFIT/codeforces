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

    int k;
    cin>>k;
    while(k--){
        int n;
        cin>>n;
       
        int w[n];
        int a[n];
        int cnt = 0;
        int c =0;
        for(int i = 0; i < n; i++){
            cin>>w[i];
            cnt += w[i];
            if(w[i] == 1) c+=2;
            else c++;
        }
        if(c > cnt or n == 1){
            cout <<"NO"<<ENDL;
        }else{
            cout <<"YES"<<ENDL;
        }
        
    }
    


    endd
}

