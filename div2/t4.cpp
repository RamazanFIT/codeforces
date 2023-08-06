#include <bits/stdc++.h>
#define ENDL "\n"
#define ff first 
#define int ll
#define ss second  
#define all(x) (x).begin(), (x).end()
#define endd return 0;
#define goodluck ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using ll = long long;
using namespace std;

signed main(){
    
    goodluck

    int a, b;
    cin>>a >> b;
    int ans = 0;
    int max_ = max(a, b);
    int min_ = min(a, b);
    a = max_;
    b = min_;
    while(a != b){
        if(a % b == 0){
            ans += a / b - 1;
            break;
        }
        ans += a / b;
        a %= b;
        int tmp = a;
        a = b;
        b = tmp;

    }
    cout << ans;


    endd
}

