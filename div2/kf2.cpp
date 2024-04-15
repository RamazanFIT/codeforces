#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    // std:: cin.tie(NULL);
    // std:: cout.tie(NULL);

    long long how_much;
    cin >> how_much;

    for(long long i = 0; i < how_much; i++){
        long long tson;
        long long tenz;
        cin >> tson >> tenz;
        long long sum_tson = 0, sum_tenz = 0;
        for(long long a = 0; a < tson; a++){
            long long some_cin;
            cin >> some_cin;
            sum_tson += some_cin;
        }
        for(long long a = 0; a < tenz; a++){
            long long some_cin;
            cin >> some_cin;
            sum_tenz += some_cin;
        }
        if(sum_tson > sum_tenz){
            cout << "Tsondu\n";
        } else if(sum_tenz == sum_tson) cout << "Draw\n";
        else cout << "Tenzing\n";
        
    }

    return 0;

}

