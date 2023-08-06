#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int size;cin>>size;
    while(size--){
        char x1, x2, x3;
        char y1, y2, y3;
        char z1, z2;
        bool flag1 = 1;
        bool flag2 = 1;
        bool flag3 = 1;
        bool flag11 = 1;
        bool flag22 = 1;
        bool flag33 = 1;
        bool flag_1 = 1;
        bool flag_2 = 1;
        
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                char a;
                cin >> a;
                if(i == 0 and flag1){
                    x1 = a;
                    flag1 = false;
                } else{
                    if(x1 != a and i == 0) x1 = 0;
                }

                if(i == 1 and flag2){
                    x2 = a;
                    flag2 = false;
                } else{
                    if(x2 != a and i == 1) x2 = 0;
                }
                
                if(i == 2 and flag3){
                    x3 = a;
                    flag3 = false;
                } else{
                    if(x3 != a and i == 2) x3 = 0;
                }

                




                if(j == 0 and flag11){
                    y1 = a;
                    flag11 = false;
                } else{
                    if(y1 != a and j == 0) y1 = 0;
                }

                if(j == 1 and flag22){
                    y2 = a;
                    flag22 = false;
                } else{
                    if(y2 != a and j == 1) y2 = 0;
                }
                
                if(j == 2 and flag33){
                    y3 = a;
                    flag33 = false;
                } else{
                    if(y3 != a and j == 2) y3 = 0;
                }
                if(i == j and flag_1){
                    z1 = a;
                    flag_1 = false;
                } else{
                    if(i == j and z1 != a) z1 = 0;
                }

                if(i + j == 2 and flag_2){
                    z2 = a;
                    flag_2 = false;
                } else{
                    if(i + j == 2 and z2 != a) z2 = 0;
                }
                
            }
        
        }
        // int k = min('+', min('O', 'X'));
        //     int cnt = x1 + x2 + x3 + y1 + y2 + y3 + z1 + z2;
        //     if(cnt / k >= 3 or cnt == '.'){
        //         cout << "DRAW\n";
        //     } else{
        //         cout << char(cnt) << "\n";
        //     }
        int cnt = 0;
        if(x1 != 0 and x1 != '.'){
            cnt++;
        }
        if(x2 != 0 and x2 != '.'){
            cnt++;
        }
        if(x3 != 0 and x3 != '.'){
            cnt++;
        }
        if(y1 != 0 and y1 != '.'){
            cnt++;
        }
        if(y2 != 0 and y2 != '.'){
            cnt++;
        }
        if(y3 != 0 and y3 != '.'){
            cnt++;
        }
        if(z1 != 0 and z1 != '.'){
            cnt++;
        }
        if(z2 != 0 and z2 != '.'){
            cnt++;
        }
        if(cnt >= 3){
            // cout << "DRAW\n";
        }else{
            if(x1 != 0 and x1 != '.'){
            cout << x1 << "\n";
            continue;
        }
        if(x2 != 0 and x2 != '.'){
            cout << x2 << "\n";
            continue;
        }
        if(x3 != 0 and x3 != '.'){
            cout << x3 << "\n";
            continue;
        }
        if(y1 != 0 and y1 != '.'){
            cout << y1 << "\n";
            continue;
        }
        if(y2 != 0 and y2 != '.'){
           cout << y2 << "\n";
           continue;
        }
        if(y3 != 0 and y3 != '.'){
            cout << y3 << "\n";
            continue;
        }
        if(z1 != 0 and z1 != '.'){
            cout << z1 << "\n";
            continue;
        }
        if(z2 != 0 and z2 != '.'){
            cout << z2 << "\n";
            continue;
        }
        }
        cout << "DRAW\n";
    }

    
    


}

