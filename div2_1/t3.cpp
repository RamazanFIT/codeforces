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

    
    int c;
    cin>>c;
    while(c--){
        int n;
        cin>>n;
        int cnt = 0;
        vector<int> massive(n);
        int f = 0;
        for(int i = 0; i < n; i++){
            cin>>massive[i];
            cnt += massive[i];
        }
        f = cnt;
        // cout << cnt << ENDL;
        vector<int> cp(n);
        bool flag = false;
        for(int i = 0; i < n - 1; i++){
            if(cnt <= 0){
                flag = true;
                break;
            }
            if(massive[i] != 1){
                cnt -= 1;
                cp[i] = 1;
            } else if(massive[i] == 1){
                cp[i] = 2;
                cnt -= 2;
            }
        }
        cp[n - 1] = cnt;
        // bool flag = false;
        int j = 0;
        for(int i = 0; i < n; i++){
            j += cp[i];
            if(cp[i] == massive[i] or cp[i] <= 0){
                cout << "NO" << ENDL;
                flag = true;
                break;
            }
        }
        // cout << j << " " << f << ENDL;
        if(j != f){
            cout << "NO" << ENDL;
            continue;
        }
        if(!flag){
            cout <<"YES" << ENDL;
        }
        // for(int i = 0; i < n; i++) cout << cp[i ] << " ";



    
    }


    endd
}

