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

    unordered_set<ll> mass;
    string a, b;
    cin >> a >> b;
    for(int i = 0; i < a.size(); i++){
        if(a[i] == '0') continue;
        mass.insert(a[i] - '0');
    }
    int cnt = 0;
    for(int i = 0; i < b.size(); i++){
        if(b[i] == '0') continue;
        if(mass.find(b[i] - '0') != mass.end()){
            cnt++;
            // return 0;
        }
    }
    if(cnt == 1){
        cout << "YES" << ENDL;
    } else{
        cout << "NO" << ENDL;
    }
    


    endd
}

