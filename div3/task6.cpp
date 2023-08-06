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

    int size;
    cin>>size;
    string s;
    cin >> s;
    string a;
    cin>>a;

    ll ans = 0;
    int cnt = 0;
    for(int i = 0; i < size; i++){
        if(s[i] == a[0] and s[i + 1] == a[1]){
            ans += (cnt + 1) * (size - (i + 1));
            cnt = 0;
        } else{
            cnt++;
        }
    }
    cout << ans << ENDL;
    


    endd
}

