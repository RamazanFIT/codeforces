#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    
    long long size;
    cin >> size;
    while(size--){
        long long some_size, target, way;
        cin >> some_size >> target >> way;
        vector<long long> massive(some_size);
        for(long long i = 0; i < some_size; i++){
            cin >> massive[i];
        }
        
        sort(massive.begin(), massive.end());
        long long max_max = way - 2;
        bool flag = true;
        bool l = true;
        // if(massive[some_size - 1] * way < target){
        //     cout << "Impossible\n";
        //     continue;
        // }
        long long x = 0;
        long long hjhj = 0;
        long long sum_of_massive = 0;
        long long wh = 0;
        for(long long i = some_size - 1; i >= 0; i--){
            // if(hjhj >= way) break;
            // x += massive[i];
            // hjhj++;
            if(hjhj < way){
                x += massive[i];
                hjhj++;
            }
            if(i > way) wh += massive[i];
            // if(i > min(max_max, some_size - 1) + 1){
            //     sum_of_massive += massive[i];
            // }
        }
        for(int i = 0; i < min(max_max, some_size - 1) + 1; i++){
            sum_of_massive += massive[some_size - 1 - i];
            
        }
        // cout << x;
        if(x >= target){
                cout << "Infinity" << "\n";
                flag = false;
                continue;
        }
        while(max_max >= 0){
            
            long long cnt = 0;
            long long sum = 0;
            
            // cout << way + 1 << " " <<  min(max_max, some_size - 1 - cnt) << endl;;
            // while(cnt < min(max_max, some_size - 1) + 1){
             
            //     sum += ((way - cnt) / (1 + max_max)) * massive[some_size - 1 - cnt];
            //     if((way - cnt) % (max_max + 1)){
            //         // cout << cnt << " ";
            //         sum += massive[some_size - 1 - cnt];
            //     }
                
            //     if(l and cnt < way){
            //         wh += massive[some_size - 1 - cnt];
                    
            //     }
             
            //     cnt++;
            // }
            for(int i = 0; i < min(max_max, some_size - 1) + 1; i++){
                if((way - cnt) % (max_max + 1)){
                    // cout << cnt << " ";
                    sum += massive[some_size - 1 - i];
                }
            }
            // long long qwerty = ((way + way - min(max_max, some_size - 1)) / 2) * (min(max_max, some_size - 1) + 1);
            // long long precent = (qwerty / (max_max + 1)) * max_max + (qwerty % (max_max + 1));
            // cout << precent << " lolo\n";
            long long x_x = ((min(max_max, some_size - 1)) / 2) * (min(max_max, some_size - 1) + 1);
            long long y_y = way * (min(max_max, some_size - 1) + 1);
            long long jojo = (y_y - x_x) / (1 + max_max);
            sum += jojo * sum_of_massive;
            // cout << sum <<"jojo\n";
            // cout << wh << "efef\n";
            // cout << sum_of_massive * 2<< "\n";
            // l = false;
            if(wh >= target){
                cout << "Infinity" << "\n";
                flag = false;
                break;
            }
            // if(massive[some_size - 1] * way < target){
            //     cout << "Impossible\n";
            //     flag = false;
            //     break;
            // }
            if(sum >= target){
                cout << max_max << "\n";
                flag = false;
                break;
            }

            max_max--;
        }
        if(flag){
            cout << "Impossible\n";
        }
    }

}

