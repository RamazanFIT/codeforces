#include <bits/stdc++.h>
#define ENDL "\n"
#define ff first 
#define ss second  
#define all(x) (x).begin(), (x).end()
#define endd return 0;
#define goodluck ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using ll = long long;
using namespace std;

map<int, int> mapa;
int k = 1;

void rec(int first_plane, int sec){
    // cout << first_plane << " " << sec << ENDL;
    if(k > 3) return;
    if(first_plane == sec){
        return;
    } else{
        k++;
        rec(first_plane, mapa[sec]);
    }
}


signed main(){
    
    goodluck

    int n;
    cin>>n;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        mapa[i + 1] = a;
    }

    for(int i = 1; i <= n; i++){
        k = 1;
        rec(i, mapa[i]);
        if(k == 3){
            break;
        }
    }
    // rec(1, mapa[1]);
    // cout << k << " ";
    if(k == 3){
        cout << "YES" << ENDL;
    } else cout << "NO" << ENDL;
    
    


    endd
}

