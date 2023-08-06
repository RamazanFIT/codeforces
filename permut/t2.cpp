#include <bits/stdc++.h>
#define ENDL "\n"
#define ff first 
#define ss second  
#define all(x) (x).begin(), (x).end()
#define endd return 0;
#define goodluck ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using ll = long long;
using namespace std;

signed main(){
    
    goodluck
    freopen("minmax.in", "r", stdin);
    freopen("minmax.out", "w", stdout);

    int n;
    cin>>n;
    // vector<int> massive;
    // map<int, int> mapa;
    
    multiset<int> set_;
    while(n--){
        string s;
        cin>>s;
        
        if(s[s.size() - 1] == ')'){
            string a;
            for(int i = s.size() - 2; i >= 0; i--){
                if(s[i] == '(') break;
                a += s[i];
            }
            reverse(a.begin(), a.end());
            // mapa[stoi(a)]++;
            set_.insert(stoi(a));

        } else if(s[s.size() - 1] == 'x'){
            auto it = set_.end();
            it--;
            cout << *it << ENDL;
            set_.erase(it);

        } else{
                auto it = set_.begin();
            cout << *it << ENDL;
            set_.erase(it);
                
        }
    }
    


    endd
}

