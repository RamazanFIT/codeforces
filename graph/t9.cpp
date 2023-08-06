#include <bits/stdc++.h>
#define ENDL "\n"
#define ff first 
#define ss second  
#define all(x) (x).begin(), (x).end()
#define endd return 0;
#define goodluck ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using ll = long long;
using namespace std;
vector<int> q[10];
signed main(){
    
    goodluck
    // freopen("std.in", "r", stdin);
    // freopen("sdt.out", "w", stdout);

    
    // unordered_map<pair<int, int>, int> mapa;
    // map<int, int> jojo[100];
    // jojo[0][0] = 1;
    // cout << jojo[0][0]


// ;

    priority_queue<int> q;
    q.push(10000);
    q.push(12);
    q.push(-1);
    q.push(100);
    q.push(11);

    cout << q.top();
    q.pop();
    cout << q.top();
    endd
}

