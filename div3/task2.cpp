#include <bits/stdc++.h>
#define endl "\n"
#define ff first 
#define ss second  
#define all(x) (x).begin(), (x).end()
#define endd return 0;
#define vi vector<int>
#define goodluck ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using ll = long long;
using namespace std;

signed main(){
    
    goodluck

    int size;
    cin>>size;
    vi massive(size);
    for(int i = 0; i < size; i++){
        cin >> massive[i];
    }
    int i1 = 0, i2 = size - 1;
    int ans = 0;
    int fff = 0;
    bool flag1 = true, flag2 = true;
    while(flag1 or flag2){
        if(massive[i1] <= massive[i1 + 1] and flag1){
            i1++;
        } else flag1 = false;
        if(massive[i2] <= massive[i2 - 1] and flag2){
            i2--;
        } else flag2 = false;
        if(i1  == i2 ){
            fff = 1;
            break;
        }
    }    
    cout << size - i2 + i1 + 1 - fff<< endl;


    endd
}

