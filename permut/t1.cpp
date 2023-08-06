#include <bits/stdc++.h>
#define ENDL "\n"
#define ff first 
#define ss second  
#define all(x) (x).begin(), (x).end()
#define endd return 0;
#define goodluck ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using ll = long long;
using namespace std;

bool comp(int a, int b) {return b >= a;}

signed main(){
    
    goodluck
    freopen("qsort.in", "r", stdin);
    freopen("qsort.out", "w", stdout);

    int n;
    cin >> n;
    vector<int> massive(n);
    for(int i = 0; i < n; i++) cin >> massive[i];
    sort(all(massive), comp);
    for(auto it : massive) cout << it << " "; 
    


    endd
}

