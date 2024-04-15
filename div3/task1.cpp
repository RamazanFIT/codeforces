#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    
    
    int size;
    cin>>size;
    int zero = 0;
    int one = 0;
    int cnt = 0;
    vector<int> massive(size);
    for(int i = 0; i < size; i++){
        cin >> massive[i];
        if(massive[i] == 1) one++;
        if(massive[i] == 0) zero++;
    }

    for(int i = 0; i < size; i++){

        if(massive[i] == 0){
            zero--;
        } else if(massive[i] == 1) one--;
        cnt++;
        if(zero == 0 or one == 0){
            cout << cnt << "\n";
            return 0;
        }
    }


}

