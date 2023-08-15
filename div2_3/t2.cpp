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


void solve(){
    int n;
    cin>>n;
    int a[n];
    // vector<int> b;
    // vector<int> c;
    map<int, int> mapa;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        mapa[a[i]]++;
    }
    if(mapa.size() <= 1){
        cout << -1 << ENDL;
    } else{
        int b = 0;
        int c = 0;
        int cnt = 0;
        for(auto it : mapa){
            if(cnt == 0){
                b += it.second;
                cnt++;
            } else{
                c += it.second;
            }
        }
        cout << b << " " << c << ENDL;
        cnt = 0;
        for(auto it : mapa){
            if(cnt == 0){
                // b += it.second;
                for(int i = 0; i < it.second; i++){
                    cout << it.first << " ";
                }
                cout << ENDL;
                cnt++;
            } else{
                // c += it.second;
                for(int i = 0; i < it.second; i++){
                    cout << it.first << " ";
                }
                cout << ENDL;
            }
        }
    }
    
}



signed main(){
    
    goodluck
    // freopen("std.in", "r", stdin);
    // freopen("sdt.out", "w", stdout);

    
    int n;
    cin>>n;
    while(n--) solve();


    endd
}

