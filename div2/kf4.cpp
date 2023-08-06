#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int how_much;

    cin >> how_much;

    for(int i = 0; i < how_much; i++){
        int size, target;
        cin >> size >> target;

        int ans = 0;
        
        for(int h = 0; h < 3; h++) {
            bool flag = true;
            for(int j = 0; j < size; j++){
                int t;
                cin >> t;
                if((t & target) != t) flag = false;
                if(flag) ans |= t;
            }
        }
        if(ans == target){
            cout << "Yes\n";
        } else cout << "No\n";
    }
    return 0;



}

