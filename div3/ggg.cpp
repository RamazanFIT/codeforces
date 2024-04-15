#include <bits/stdc++.h>
#define endl "\n"
#define ff first 
#define ss second  
#define all(x) (x).begin(), (x).end()
#define end return 0;
#define goodluck ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using ll = long long;
using namespace std;



signed main(){
    
    goodluck

    int n;cin>>n;
    while(n--){
        int a;
        cin>>a;
        bool mass[a + 1] = {0};
        int cnt = 0;
        for(int i = 2; i < sqrt(a) + 1; i++){
            if(mass[i]) continue;
            for(int j = i * i; j <= a; j+=i){
                mass[i] = true;
                
            }
        }
        vector<int> massive;
        for(int i = 0; i <)
    }
    
    


    end
}

