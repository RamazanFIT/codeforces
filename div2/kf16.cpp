#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int size;cin>>size;
    while(size--){
        int x, y;
        cin >> x >> y;
        int massive[x + 2][y + 2];

        for(int i = 0; i < x + 2; i++){
            for(int j = 0; j < y + 2; j++){
                massive[i][j] = 0;
            }
        }
        for(int i = 1; i < x + 1; i++){
            for(int j = 1; j < y + 1; j++){
                cin >> massive[i][j];
            }
        }
        int cnt = 0;
        for(int i = 0; i < x + 2; i++){
            for(int j = 0; j < y + 2; j++){
                if(massive[i][j] != 0){
                    bool flag = false;
                    if(massive[i - 1][j] != 0) flag = true;
                    if(massive[i + 1][j] != 0) flag = true;
                    if(massive[i][j - 1] != 0) flag = true;
                    if(massive[i][j + 1] != 0) flag = true;
                    if(flag) cnt += massive[i][j];
                }
            }
        }
        cout << cnt << "\n";

    }
    


}

