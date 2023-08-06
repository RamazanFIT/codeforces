#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    
    
    long long size;
    cin>>size;
    while(size--){
        long long a;
        cin>>a;
        long long sum = 0;
        while(a > 0){
            sum += a;
            a /= 2;
        }
        cout << sum << "\n";
    }


}

