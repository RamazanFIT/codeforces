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
        // int f1 = 0, f2 = 0, f3 = 0;
        int max1 = 0;
        map <int, int> some_map;
        // int some_map[some_size + 1] = {0};
        int cnt_of_zero[some_size + 1] = {0};
        int zero = 0;
        vector<int> indx;
        vector<int> massive(some_size);
        for(int i = 0; i < some_size; i++){
            int in;
            cin >> in;
            massive[i] = in;
            if(in == 0){
                // for(int j = 0; j < indx.size(); j++){
                //     max1++;
                //     some_map[indx[j]]++;
                // }
                for(auto it : some_map){
                    max1++;
                    // it.second++; 
                    some_map[it.first]++;
                }
                zero++;
            } else{
                // indx.push_back(i); 
                some_map[i] = 0;
            }
            cnt_of_zero[i] = zero;

        }
        int copy = max1;
        int haha_1 = 0;
        for(int i = 0; i < some_size; i++){
            if(massive[i] == 1) haha_1++;
            if(massive[i] == 0){
                // int some_max = 0;
                // for(int j = 0; j < i; j++){
                //     if(some_map[j] != 0){
                //         some_max += some_map[j] - 1;
                //     }
                // }
                int zto = cnt_of_zero[some_size - 1] - cnt_of_zero[i];
                // int right_part = 0;
                // for(int k = i + 1; k < some_size; k++){
                //     right_part += some_map[k];
                // }
                // max1 = max(max1, right_part + zto + some_max);
                max1 = max(max1, copy - haha_1  + zto);

            } else{
                // int left_part = 0;
                // int cnt1 = 0;
                // for(int j = 0; j < indx.size(); j++){
                //     if(indx[j] >= i) break;
                //     // left_part += some_map[indx[j]];
                //     cnt1++;
                // }


                // int right_part = copy - left_part;
                // for(int j = i + 1; j < some_size; j++){
                //     right_part += some_map[j];
                // }
                // max1 = max(max1, right_part + left_part);
                max1 = max(max1, copy - some_map[i] + haha_1 - 1);
            }
        }
        std:: cout << max1 << endl;

    }


}

