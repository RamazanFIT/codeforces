#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    
    
    long long size;
    cin>>size;
    while(size--){
        long long some_size;
        cin>>some_size;
        long long days;
        cin>>days;
        long long tmp;
        cin>>tmp;
        long long cnt = 0;

        long long ans = 0;
        bool flag = false;
        for(long long i = 0; i < some_size; i++){
            long long a;
            cin >> a;
            if(a <= tmp){
                cnt++;
                if(i == some_size - 1) flag = true;
            } else{
                if(days <= cnt){
                double t = cnt - days + 1;
                t = ((t + 1) / 2) *  t;
                ans += t;
                cnt = 0;
                } else{
                    cnt = 0;
                }
            }
    
        }
        if(flag){
                if(days <= cnt){
                double t = cnt - days + 1;
                t = ((t + 1) / 2) *  t;
                ans += (long long)(t);
                cnt = 0;
                } else{
                    cnt = 0;
                }
            }
        cout << ans << "\n";

    }



}

