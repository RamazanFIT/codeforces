#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    
    long long size;cin>>size;
    while(size--){
        long long some_size;long long target;long long way;
        cin >> some_size >> target >> way;
        vector<long long> massive(some_size);
        for(long long i = 0; i < some_size; i++){
            cin >> massive[i];
        }
        long long left = 0, right = way + 1;
        sort(massive.begin(), massive.end());
        while(left < right){
            long long m = left + (right - left + 1) / 2;
            long long sum = 0;
            for(long long i = 0; i < way; i++){
                if((i) % m < some_size) sum +=  massive[some_size - 1 - (i % m)];
            }
            if(sum >= target){
                left = m;
            } else{
                right = m - 1;
            }
        }
        if(left == 0){
            cout << "Impossible\n";continue;
        } else if(left >= way) {cout << "Infinity\n";continue;}
        cout << left - 1 << "\n";
    }



}

