#include <bits/stdc++.h>
#define ENDL "\n"
#define ff first 
#define ss second  
#define all(x) (x).begin(), (x).end()
#define endd return 0;
#define goodluck ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using ll = long long;
using namespace std;

void solve(){
    string a = "", b = "";
    string s;
    cin>>s;
    for(int i = 0; i < s.size(); i++){
        a += '(';
    }
     for(int i = 0; i < s.size(); i++){
        a += ')';
    }
     for(int i = 0; i < s.size(); i++){
        // a += '(';
        b += "()";
    }
    if(a.find(s) == -1){
        cout << "YES" << ENDL;
        cout << a << ENDL;
    } else if(b.find(s) == -1){
        
        cout << "YES" << ENDL;
        cout << b << ENDL;
    } else{
        cout << "NO" << ENDL;
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

