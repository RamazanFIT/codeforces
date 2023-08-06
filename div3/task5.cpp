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
    ll a, s;
    cin >> a >> s;

    ll b = s - a;
    map<ll, ll> for_b;
    map<ll, ll> for_a;
    int size_a = 0, size_b = 0;
    while(a > 0){
        for_a[a % 10]++;
        a /= 10;
        size_a += 1;
    }
    while(b > 0){
        for_b[b % 10]++;
        b /= 10;
        size_b += 1;
    }
    if(for_b != for_a or size_b != size_a){
        cout << "NO" << ENDL;
        return 0;
    }
    cout << "YES" << ENDL;


    endd
}

