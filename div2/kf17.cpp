#include <bits/stdc++.h>

using namespace std;

const int N = 1002;
int massive[N][N];

int sum = 0;

void rec(int i, int j){
    
    if(massive[i][j] == 0) return;
    massive[i][j] = 0;
    if(massive[i - 1][j] != 0){
        sum += massive[i - 1][j];
       
        rec(i - 1, j);
    }
    if(massive[i + 1][j] != 0){
        sum += massive[i + 1][j];
       
        rec(i + 1, j);
    }
    if(massive[i][j - 1] != 0){
        sum += massive[i][j - 1];
        
        rec(i, j - 1);
    }
    if(massive[i][j + 1] != 0){
        sum += massive[i][j + 1];
        
        rec(i, j + 1);
    }
    
    return;
}




int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            massive[i][j] = 0;
        }
    }
   
    int size;cin>>size;
    
    while(size--){
        int x, y;
        cin >> x >> y;
        int some_max = 0;
        for(int i = 1; i < x + 1; i++){
            for(int j = 1; j < y + 1; j++){
                cin >> massive[i][j];
            }
        }
        for(int i = 1; i < x + 1; i++){
            for(int j = 1; j < y + 1; j++){
                int jojo = massive[i][j];
                rec(i, j);
                some_max = max(some_max, sum + jojo);
                sum = 0;
            }
        }
        cout << some_max << "\n";
    }

}

