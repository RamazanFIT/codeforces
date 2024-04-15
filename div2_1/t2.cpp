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
    for(int i = 0; i < n; i++){
        cin>>massive[i];
        if(massive[i] == 1) cnt++;
    }
    if(n % 2 == 0){
        if(cnt > n / 2){
            cout << "NO" << ENDL;
        } else{
            cout << "YES" << ENDL;
        }
        // return 0;
        continue;
    } else{
        sort(all(massive));
        int fir = massive[0];
        if(fir == 1) cnt--;
        if(cnt > (n - 1) / 2){
            cout << "NO" << ENDL;
            // return 0;
            continue;
        }
        int plus = (n - 1) / 2;
        int minus = plus;
        int ind = 1 + cnt;
        while(cnt--){
            if(cnt <= 0 or ind >= n) break;
            massive[ind]++;
            ind++;
            plus--;
        }
        while(plus > 0){
            if(ind >= n) break;
            massive[ind]++;
            plus--;
            ind++;
        }
        while(minus > 0){
            if(ind >= n) break;
            massive[ind]--;
            minus--;
            ind++;
        }
        
        bool flag = true;
        for(int i = 1; i < n; i++){
            if(massive[i] != fir){
                flag = false;
                break;
            }
        }
        if(flag){
            cout <<"NO"<< ENDL;
        } else{
            cout <<"YES" << ENDL;
        }




    }
    }


    endd
}

