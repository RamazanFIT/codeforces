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

    int nnn;
    cin>>nnn;
    while(nnn--){
        int x, y;
        cin>>x>>y;
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        vector<pair<int, int>> p1{{x1, y1 - 1}, {x1, y1 + 1}, {x1 - 1, y1}, {x1 + 1, y1}};
        
        vector<pair<int, int>> p2{{x2, y2 - 1}, {x2, y2 + 1}, {x2 - 1, y2}, {x2 + 1, y2}};

        int f = 4, ff = 4;
        for(int i = 0; i < 4; i++){
            if(!(p1[i].first >= 1 and p1[i].first <= x and p1[i].second >= 1 and p1[i].second <= y)){
                f--;
            } 
            if(!(p2[i].first >= 1 and p2[i].first <= x and p2[i].second >= 1 and p2[i].second <= y)){
                ff--;
            } 
        }

        cout << min(ff, f) << ENDL;

    }
    


    endd
}

