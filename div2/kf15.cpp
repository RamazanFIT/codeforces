#include <bits/stdc++.h>

using namespace std;

bool flag = false;


void rec(int num, int target){
    
    if(num == target){
        flag = true;
        return;
    }
    if(flag) return;
    if(num % 3 != 0) return;
    
    rec(num / 3, target);
    rec((num / 3) * 2, target);
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int size;cin>>size;
    while(size--){
        int a, target;
        cin >> a >> target;
        rec(a, target);
        if(flag){
            cout << "YES\n";
            flag = false;
        } else{
            cout << "NO\n";
        }
    }
    


}

