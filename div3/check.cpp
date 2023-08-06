#include <bits/stdc++.h>
#define endl "\n"
#define ff first 
#define ss second  
#define all(x) (x).begin(), (x).end()
#define end return 0;
#define goodluck ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using ll = long long;
using namespace std;


void solve(){

    string code;cin>>code;
    int size;
    cin>>size;
    string s1, s2;
    cin >> s1 >> s2;
    int id1 = 0, id2 = 0;
    int cnt1 = 0, cnt2 = 0;
    for(int i = 0; i < code.size(); i++){
        // if(id1 >= s1.size() or id2 >= s2.size()) break;
        if(s1[id1] == code[i] and id1 < size){
            cnt1++;
            id1++;
        }
        if(s2[id2] == code[i] and id2 < size){
            cnt2++;
            id2++;
        }
    }
    if(cnt2 != size or cnt1 != size) cout << "YES" << endl;
    else cout << "NO" << endl;
    return;
}





signed main(){
    
    goodluck
    int size;cin>>size;
    while(size--) solve();



    end
}

