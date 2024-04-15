#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int size;cin>>size;
    while(size--){
        int some_size;
        cin>>some_size;
        vector<int> massive(some_size);
        for(int i = 0; i < some_size; i++){
            cin >> massive[i];
        }
        sort(massive.begin(), massive.end());
        int sum = 0;
        for(int i = 0; i < some_size / 2; i++){
            sum += massive[some_size - 1 - i] - massive[i];
        }
        cout << sum << "\n";
    }
    


}

