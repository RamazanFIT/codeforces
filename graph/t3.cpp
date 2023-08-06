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
        if(n % 2 == 0){
            cout << "NO" << ENDL;
            continue;
        }
        cout << "YES" << ENDL;
        cout << n << " " << n + 1 << ENDL;
        int middle = n + n + 1;
        int left[(n - 1) / 2];
        int right[(n - 1) / 2];
        int ind = 0;
        for(int i = middle - 1; i > middle - 1 - (n - 1) / 2; i--){
            left[ind] = i;
            ind++;
        }
        ind = 0;
        for(int i = middle + (n - 1) / 2; i > middle; i--){
            right[ind] = i;
            ind++;
        }
        ind = 0;
        for(int i = n * 2 - (n - 1) / 2 + 1; i <= n * 2; i++){
            cout << i << " " << right[ind] - i << ENDL;
            ind++;
        }
        ind = 0;
        for(int i = n + 2; i < n + 2 + (n - 1) / 2; i++){
            cout << i << " " << left[ind] - i << ENDL;
            ind++;
        }

    }
    
    


    endd
}

// 3 -> 6

// 1 2 3 4 5 6
// 2 4
// 1 6
// 3 5


// 5 -> 10
// 1 2 3 4 5 6 7 8 9 10

// 1 10 = 11
// 2 6 = 8
// 3 7 = 10
// 4 8 = 12
// 5 9 = 14

// 1 2 3 4 5 6 7 8

// 1 8 = 9
// 2 5 = 7
// 3 6 = 9
// 4 7 = 11

// 1 2 3 4 5 6  7 8 9 10 11 12

// 1 12
// 2 7
// 3 8
// 4 9
// 5 10

// 1 2 3 4 5 6 7  8 9 10 11 12 13 14

// 1 14  = 15
// 2 8 = 10
// 3 9 = 12
// 4 10 =14
// 5 11= 16
// 6 12 = 18
// 7 13 = 20

//////////////////////////////


// 4 -> 8

// 1 2 3 4 5 6 7 8

// 1 8
// 2 7
// 3 6
// 4 5
// 3 7 11 15
// 1 2 
// 3 4 
// 5 6
// 7 8


// 1 2 3 4 5 6
// 1 5 
// 3 4 
// 2 6


// 1 2 3 4  5 6  7 8 9 10

// 5 6 = 11
// 12 13
// 10 9
// 13 = 9 4
// 12 = 10 2
// 10 = 7 3
// 9 = 8 1

// 1 2  3 4  5 6
// 3 4 = 7
// 6 8

// 8 = 6 2
// 6 = 5 1









// 1 8 
// 3 7 
// 5 6 
// 2 10 
// 4 9

// 5 6 11
// 10 4 14
// 9 3 12























