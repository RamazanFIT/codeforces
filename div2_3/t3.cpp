#include <bits/stdc++.h>
#define ENDL "\n"
#define ff first 
#define ss second  
#define all(x) (x).begin(), (x).end()
#define endd return 0;
#define int ll
#define goodluck ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using ll = long long;
using namespace std;

signed main(){
    
    goodluck
    // freopen("std.in", "r", stdin);
    // freopen("sdt.out", "w", stdout);

    int n;
    cin>>n;
    while(n--){
        int k;
        int c;
        cin>>k;
        c = k;
        vector<int> massive;
       
        int ans = 0;
        vector<int> secondd;
        
        vector<int> firstt;
        while(k--){

            int size;
            cin>>size;
            vector<int> tmp(size);
            for(int i = 0; i < size; i++){
                cin>>tmp[i];
            }
            sort(all(tmp));
            secondd.push_back(tmp[0]);
            // ans += tmp[1];
            firstt.push_back(tmp[1]);
        }
        
        sort(all(firstt));
        secondd.push_back(firstt[0]);
        sort(all(secondd));
        for(int i = 1; i < firstt.size(); i++){
            ans += firstt[i];
        }
        ans += secondd[0];


        // sort(all(massive));
        // int ans = massive[0];
        // c--;
        // if(c >= 1)
        // for(int i = massive.size() - 1; i > massive.size() - 1 - c; i--){
        //     ans += massive[i];
        // }
        cout << ans << ENDL;
    }
    


    endd
}

