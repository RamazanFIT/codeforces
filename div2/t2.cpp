#include <bits/stdc++.h>
#define ENDL "\n"
#define ff first 
#define ss second  
#define int ll
#define all(x) (x).begin(), (x).end()
#define endd return 0;
#define goodluck ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using ll = long long;
using namespace std;

signed main(){
    
    goodluck
    int nn;
    cin>>nn;

    while(nn--){
        int n, k;
        cin >> n >> k;
        int firts_part = ((1 + n) * n);
        if(firts_part % 2 == 0){
                firts_part /= 2;
            } else{
                firts_part /= 2;
                firts_part++;
            }
        int second_part = (n * (n - 1));
        if(second_part % 2 == 0){
                second_part /= 2;
            } else{
                second_part /= 2;
                second_part++;
            }
        if(firts_part + second_part <= k){
       
            cout << 2 * n - 1 << ENDL;
            continue;
        }

        if(k <= firts_part){
            int D = 1 + 8 * k;
            int x = sqrt(double(D)) - 1;
            if(x % 2 == 0){
                x /= 2;
            } else{
                x /= 2;
                x++;
            }
            cout << x << ENDL;
        }
        else{
            int H = k - firts_part;
            int b = n * n - n - 2 * H;
            int D = 1 + 4 * b;
            int x = 1 + sqrt(double(D));
            if(x % 2 == 0){
                x /= 2;
            } else{
                x /= 2;
                x++;
            }
            cout << x << ENDL;
        }



    }


    

    
    


    endd
}

