#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int size;cin>>size;
    while(size--){
        int n;
        double a, h;
        cin >> n >> a >> h;
        vector<double> massive(n);
        
        double s2 = (h *  a) / 2;
        double ans = s2 * double(n);
        for(int i = 0; i < n; i++) {cin >> massive[i];}
        for(int i = 0; i < n - 1; i++){
            if(massive[i + 1] - massive[i] < h){
                double h1 = h - (massive[i + 1] - massive[i]);
                // double s1 = (h1 / h) * (h1 / h) * s2;
                double s1 = (h1 * h1 * s2) / (h * h);
                ans -= s1;
            } 
        }
        cout << ans << "\n";
    }
    


}

