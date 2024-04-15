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
    // freopen("std.in", "r", stdin);
    // freopen("sdt.out", "w", stdout);

    int nnn;
    cin>>nnn;
    while(nnn--){
        int n;
        cin>>n;
        int e = 0;
        int o = 0;
        int alice =0;
        int bob = 0;
        vector<int> al;
        vector<int> bo;
        for(int i = 0; i < n; i++){
            int a;
            cin>>a;
            // if(a % 2==0) e++;
            // else o++;
            if(a % 2 == 0){
                e++;
                al.push_back(a);
            } else{
                o++;
                bo.push_back(a);
            }
        }
    
        if(e > o){
            sort(all(al));
            sort(all(bo));
            for(int i = bo.size() - 1; i > bo.size() - 1 - o; i--){
                bob += bo[i];
            }
            for(int i = al.size() - 1; i > al.size() - 1 - o; i--){
                alice += al[i];
            }
            
            e -= o;
            // o = 0;
            for(int i = al.size() - 1 - o; i >= 0; i-=2){
                alice += al[i];
            }
            if(alice > bob){
                cout << "Alice" << ENDL;
            } else if(bob > alice){
                cout << "Bob" << ENDL;
            } else{
                cout << "Tie" << ENDL;
            }
        } else{
            sort(all(al));
            sort(all(bo));
            for(int i = bo.size() - 1; i > bo.size() - 1 - e; i--){
                bob += bo[i];
            }
            for(int i = al.size() - 2; i > al.size() - 1 - e; i--){
                alice += al[i];
            }
            // alice += e;
            // bob += e;
            // o -= e;
            // e = 0;
            // bob += o / 2;
            for(int i = bo.size() - 1 - e; i >= 0; i-=2){
                bob += bo[i];
            }
            cout << alice << " " << bob <<"ef";
            if(alice > bob){
                cout << "Alice" << ENDL;
            } else if(bob > alice){
                cout << "Bob" << ENDL;
            } else{
                cout << "Tie" << ENDL;
            }
        }
    }
    


    endd
}

