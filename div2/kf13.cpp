#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    
    // int size;cin>>size;
    // while(size--){
    //     int some_size;cin>>some_size;
    //     int cnt = 0;
    //     int max = 0;
    //     for(int i = 0; i < some_size; i++){
    //         int a;
    //         cin >> a;
    //         if(a == 0){
    //             cnt++;
    //         } else{
    //             max = std:: max(max, cnt);
    //             cnt = 0;
    //         }
    //         if(i == some_size - 1){
    //             max = std:: max(max, cnt);
    //         }
    //     }
    //     cout << max << "\n";
    // }
    // cout << size;
    int x, y;
        cin >> x >> y;
        int massive[x + 2][y + 2];
        for(int i = 0; i < x + 2; i++) massive[i][0] = {0};
    for(int i = 0; i < x; i++){
        for(int j = 0; j < y; j++){
            cout << massive[i] << " ";
        }
        cout << "\n";
    }


}

