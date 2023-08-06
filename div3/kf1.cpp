#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int size;cin>>size;
    while(size--){
        int some_size;
        cin >> some_size;
       
        bool flag = true;
        char some_char;
        while(some_size--){
            char f;
            cin >> f;

            if(flag){
                some_char = f;
                flag = false;
            } else{
                if(some_char == f){
                    cout << f;
                    flag = true;
                }
            }
        }
        cout << "\n";
    }
    


}

