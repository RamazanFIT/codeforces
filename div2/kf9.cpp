#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int size;
    cin >> size;
    while(size--){
        int some_size;
        cin >> some_size;
        vector<int> massive(some_size);
        for(int i = 0; i < some_size; i++){
            cin >> massive[i];
        }
        int i = 0;
        int cnt = 0;
        bool flag = false;
        while(i <= some_size - 1){
            
            if(i == 0 or massive[i - 1] > massive[i]) flag = true;

            if((massive[i] < massive[i + 1] or i == some_size - 1) and flag){
                cnt++;
                flag = false;
            }
            else if(massive[i] > massive[i + 1]) flag = false;
            i++;
        }

        if(cnt == 1){
                cout << "YES\n";
            } else cout << "NO\n";
    }



}

