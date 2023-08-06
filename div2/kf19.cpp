#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    
    long long size;cin>>size;
    while(size--){
        long long some_size;
        cin>>some_size;
        bool flag = false;
        long long sum = 0;
        long long cnt = 0;
        for(long long i = 0; i < some_size; i++){
            long long a;
            cin>>a;
            if(a == 0) continue;
            if(a < 0) flag = true;
            else if(a > 0 and flag){
                cnt++;
                flag = false;
            }
            sum += abs(a);

        }
        if(flag){
            cnt++;
        }
        cout << sum << " " << cnt << "\n";
    }
    


}

