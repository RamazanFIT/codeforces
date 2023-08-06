#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    std:: cin.tie(NULL);
    std:: cout.tie(NULL);

    
    long long size;
    cin >> size;
    while(size--){
        long long some_size;
        cin >> some_size;
   
        long long max1 = 0;

        // long long some_map[some_size + 1] = {0}; 

        // long long cnt_of_zero[some_size + 1]; 
        unordered_map<long long, long long> cnt_of_zero;
        long long zero = 0;
        // vector<long long> indx;
        vector<long long> massive(some_size);
        long long hghg = 0;
        for(long long i = 0; i < some_size; i++){
            long long in;
            cin >> in;
            massive[i] = in;
            if(in == 0){
                // for(long long j = 0; j < indx.size(); j++){
                //     max1++;
                //     some_map[indx[j]]++;
                // }
                max1 += hghg;
                zero++;

            } else{
                hghg++;
               
            }
            cnt_of_zero[i] = zero;

        }
        long long copy = max1;
        long long haha_1 = 0;
        for(long long i = 0; i < some_size; i++){
            if(massive[i] == 1) haha_1++;
            if(massive[i] == 0){
                long long zto = cnt_of_zero[some_size - 1] - cnt_of_zero[i];
                max1 = max(max1, copy - haha_1  + zto);

            } else{
                long long zto = cnt_of_zero[some_size - 1] - cnt_of_zero[i];
                max1 = max(max1, copy - zto + haha_1 - 1);
            }
        }
        std:: cout << max1 << endl;

    }
    return 0;


}

