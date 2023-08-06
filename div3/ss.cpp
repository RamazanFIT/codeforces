#include <bits/stdc++.h>
#define endl "\n"
#define ff first 
#define ss second  
#define all(x) (x).begin(), (x).end()
#define endd return 0;
#define goodluck ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using ll = long long;
using namespace std;

signed main(){
    
    goodluck

    int a, b;
    cin>>a>>b;
    unordered_set<int> mass;
    int cnt = 0;
    for(int i = 0; i < b; i++){
        int c;
        cin >> c;
        // if(mass.find(c) != mass.end()){
        // } 
            mass.insert(c);
    }
    
    if(mass.size() == a - 1){
        cout << "YES\n";
        return 0;
    }
    cout << "NO\n";


    endd
}

