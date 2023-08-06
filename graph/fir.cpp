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
int w[1000 + 1][1000 + 1];
int m[1000 + 1][1000 + 1];
vector<char> path;
int f(int n){
    int cnt = 0;
    while(n % 10 == 0){
        cnt++;
        n /= 10;
    }
    return cnt;
}

void rec(int i, int j){
    // cout << i << " " << j << ENDL;
    if(i == 0 and j == 0){
        // path.push_back(m[i][j]);
        return;
    }
    if(i - 1 >= 0){
        if(w[i][j] - m[i][j] == w[i - 1][j]){
            // path.push_back(m[i][j]);
            path.push_back('D');
            rec(i - 1, j);
            return;
        }
    }
    if(j - 1 >= 0){
        if(w[i][j] - m[i][j] == w[i][j - 1]){
            path.push_back('R');
            rec(i, j - 1);
        }
    }
    return;

}

signed main(){
    
    goodluck
    // freopen("std.in", "r", stdin);
    // freopen("sdt.out", "w", stdout);

    int n;
    cin>>n;
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin>>w[i][j];
            m[i][j] = f(w[i][j]);
        }
    }
    w[0][0] = m[0][0];
    for(int i = 1; i < n; i++){
        w[i][0] = m[i][0] + w[i - 1][0];
        // w[0][i] += w[0][i - 1];
        w[0][i] = m[0][i] + w[0][i - 1];
    }
    for(int i = 1; i < n; i++){
        for(int j = 1; j < n; j++){
            if(w[i - 1][j] + m[i][j] <= w[i][j - 1] + m[i][j]){
                w[i][j] = m[i][j] + w[i - 1][j];
            } else{
                // w[i][j] *= w[i][j - 1];
                w[i][j] = m[i][j] + w[i][j - 1];
            }
        }
    }
    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < n; j++){
    //         cout << w[i][j] << " ";
    //     }
    //     cout << ENDL;
    // }

    cout << w[n - 1][n - 1] << ENDL;

    rec(n - 1, n - 1);

    for(int i = path.size() - 1; i >= 0; i--){
        cout << path[i];
    }


    endd
}

