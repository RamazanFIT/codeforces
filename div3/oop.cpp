#include <bits/stdc++.h>

using namespace std;


void set_example(){

    unordered_set<string> set;
    vector<string> vector(4);
    // for(int i = 0; i < vector.size(); i++){
    //     set.insert(vector[i]);
    // }
    // // std:: vector<int> massive;
    // for(auto it : set){
    //     cout << it << " ";
    // }
    for(int i = 0; i < 4; i++){
        cin >> vector[i];
    }
    for(int i = 0; i < 4; i++){
        cout << vector[i] << " ";
    }
}









int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    set_example();
    
    


}

