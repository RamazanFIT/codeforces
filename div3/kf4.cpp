#include <bits/stdc++.h>

using namespace std;

int index[101];

int minum = INT_MAX;

// void rec(int some_size, int group, int m, int ind){
//     if(group == 1){
//         minum = min(minum, m + abs(index[ind + some_size - 1] - index[ind]));
//         cout << minum << " "<< "aaaaaaaaa\n";
//         return;
//     }
//     if(some_size == group){
//         minum = min(minum, m);
//         cout << minum << " "<< "aaaaaaaaa\n";
//     } else{
//         for(int i = 0; i < some_size - group + 1; i++){
//             // m = index[i] - index[ind];
//             cout << ind << " " << i + ind << endl;
//             rec(some_size - i - 1, group - 1, m + index[i + ind] - index[ind], ind + i + 1);
//         }
        
//     }
//     return;
// }


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int size;cin>>size;
    while(size--){
        int some_size;
        
        cin >> some_size;
        int group;
        cin>>group;
        int size_of = some_size;
        int cnt = 0;
        int last = INT_MAX;
        int i = 0;
        while(some_size--){
            int a;
            cin >> a;
            if(last == INT_MAX){
                last = a;
                index[i] = 0;
                i++;
            } else{
                cnt += abs(last - a);
                index[i] = cnt;
                last = a;
                i++;
                // cout << cnt << " ";
            }
        }
        for(int i = 0; i < size_of; i++){
            cout << index[i] << " ";
        }
        if(group % 2 == 0){
            int k = group / 2;
            
        }
        // rec(size_of, group, 0, 0);
        // cout << minum << "\n";
        // minum = INT_MAX;


    }
    
    


}

