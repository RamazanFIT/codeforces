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
    vector<int> b;
    vector<int> c;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    b.push_back(a[0]);
    bool mai = 0;
    for(int i = 1; i < n; i++){
        bool flag = true;
        for(int j = 0; j < b.size(); j++){
            if(b[j] % a[i] == 0) flag = false;
        }
        if(flag == false){
            bool g = 0;
            for(int k = 0; k < c.size(); k++){
                if(a[i] % c[k] == 0) g = 1;
            }
            if(g){
                mai = true;
                break;
            } else
            b.push_back(a[i]);
        } else{
            c.push_back(a[i]);
        }
    }
    if(c.size() == 0 or b.size() == 0 or mai){
        cout << -1 << ENDL;
    } else{
        cout << b.size() << " " << c.size() << ENDL;
        for(int i = 0; i < b.size(); i++){
            cout << b[i] << " ";
        }
        cout << ENDL;
        for(int i = 0; i < c.size(); i++){
            cout << c[i] << " ";

        }
        cout << ENDL;
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

