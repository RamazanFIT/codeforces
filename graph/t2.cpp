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
    // freopen("std.in", "r", stdin);
    // freopen("sdt.out", "w", stdout);

    int n;
    cin>>n;
    vector<int> massive(n);
    for(int i = 0; i < n; i++) massive[i] = i + 1;

    do
    {
        vector<int> mm;
        for(int i = 0; i < n; i+=2){
            mm.push_back(massive[i] + massive[i + 1]);
        }
        bool flag = true;
        for(int i = 0; i < mm.size() - 1; i++){
            if(mm[i + 1] - mm[i] != 1) flag = false;
        }
        if(flag){
            for(int i = 0; i < n; i++) cout << massive[i] << " ";
            // break;
        cout << ENDL;
        }
        
    } while (next_permutation(all(massive)));
    
    


    endd
}

