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
    // freopen("joseph.in", "r", stdin);
    // freopen("joseph.out", "w", stdout);

    int n, k;
    cin>>n>>k;
    vector<int> massive(n);
    for(int i = 1; i <= n; i++){
        massive[i - 1] = i;
    }
    n--;
    int c = 0;
    while(n--){
        int tmp = n % k - 1;
        
    }

    cout << massive[0] << ENDL;
    


    endd
}

