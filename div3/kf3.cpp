#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int size;
    cin>>size;
    while(size--){
        int cash, n;
        cin>>cash >> n;
        int cnt = 0;
        int k = cash;
        while(k > 0){
            cnt++;
            k /= 2;
        }
        vector<int> massive;
        int power = 1;
        massive.push_back(cash);
        for(int i = 0; i < min(cnt, n); i++){
            int massive_size = massive.size();
            // for(int j = 0; j < massive_size; j++){
            //     if(massive[j] - power >= 0)
            //     massive.push_back(massive[j] - power);
            //     else break;
            // }
            power *= 2;
        }
        int ans = 0;
        // for(int i = 0; i < massive.size(); i++){
        //     if(massive[i] >= 0) ans++;
        // }
        cout << massive.size() << "\n";
    }
    


}

