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
map<int, int> mapa;
// int w[1000000];
int max_ind = 1;

void f(int n){
    
    
    for(int i = 2; i < sqrt(n) + 1; i++){
        int ind = 0;
        while(n % i == 0){
            if(mapa.find(ind) == mapa.end()) mapa[ind] = 1;
            mapa[ind] *= i;
            n /= i;
            ind++;
        }
        max_ind = max(ind, max_ind);
    }
    // cout << n << " efe" << ENDL;
    if(n > 1){
        if(mapa.find(0) == mapa.end()) mapa[0] = 1;
        mapa[0] *= n;
    }
}

signed main(){
    
    goodluck

    
    int nnn;
    cin >> nnn;
    while(nnn--){
        int n;
        cin >> n;
        f(n);
        cout << max_ind << ENDL;
        // for(int i = max_ind - 1; i >= 0; i--){
        //     cout << w[i] << " ";
        //     w[i] = 1;
        // }
        for(auto it = mapa.rbegin(); it != mapa.rend(); it++){
            cout << it->second << " ";
        }
        mapa.clear();
        cout << ENDL;
        max_ind = 1;
       
    }


    endd
}

