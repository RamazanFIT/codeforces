#include <bits/stdc++.h>
#define ENDL "\n"
#define ff first 
#define ss second  
#define all(x) (x).begin(), (x).end()
#define endd return 0;
#define int ll
#define goodluck ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using ll = unsigned long long;
using namespace std;




signed main(){
    
    goodluck
    // freopen("std.in", "r", stdin);
    // freopen("sdt.out", "w", stdout);

    int nnn;
    cin>>nnn;
    while(nnn--){
        ll n;
        cin >> n;
        vector<int> nums;
        
        
        int sq = sqrt(n);
        // cout << sq << " ";
        int ans = 0;
        int cnt = 0;
        for(int i = 1; i <= (sqrt(sq)) / 6 + 10; i++){
            if(n % i == 0){
                cnt++;
            } else{
                cnt++;
                ans = max(ans, cnt);
                cnt=0;
            }
        }
        cout << ans - 1<< ENDL;
    }



    endd
}

