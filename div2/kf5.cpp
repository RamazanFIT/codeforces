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
        vector<int> massive(some_size);
        int max1 = INT_MIN;
        int max2 = INT_MIN;
        for(int i = 0; i < some_size; i++){
            cin >> massive[i];
            
        }
        vector<int> second = massive;
        sort(second.begin(), second.end());
        max1 = second[some_size - 1];
        max2 = second[some_size - 2];
        for(int i = 0; i < some_size; i++){
            if(max1 == massive[i]){
                cout << max1 - max2 << " ";
            } else{
                cout << massive[i] - max1 << " ";
            }
        }
        cout << endl;
        



    }



}

