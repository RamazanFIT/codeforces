#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    std:: cin.tie(NULL);
    std:: cout.tie(NULL);

    int size;
    cin >> size;
    while(size--){
        int some_size;
        cin >> some_size;
        int k = INT_MIN;
        while(some_size--){
            char j;
            cin >> j;
            k = max(k, int(j));
        }
        cout << k - int('a') + 1<< endl;
    }



}

