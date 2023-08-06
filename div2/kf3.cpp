#include <bits/stdc++.h>

using namespace std;
vector<uint64_t> v1(100000);
vector<uint64_t> v2(100000);
vector<uint64_t> v3(100000);
uint64_t k = 0;

void some_rec(uint64_t & target, uint64_t floor, uint64_t now){
    if(k == 1){
        return;
    }
    if(floor >= v1.size()) return;
    if(now == target){
        k = 1;
        return;
    }
    if(now > target) return;

    some_rec(target, floor + 1, (now | v1[floor]));
    some_rec(target, floor + 1, (now | v2[floor]));
    some_rec(target, floor + 1, (now | v3[floor]));
}

int main(){
    ios_base::sync_with_stdio(0);
    std:: cin.tie(NULL);
    std:: cout.tie(NULL);

    uint64_t how_much;
    cin >> how_much;

    for(uint64_t i = 0; i < how_much; i++){

        uint64_t size, target;
        cin >> size >> target;
        if(target == 0){
            cout << "Yes\n";
            continue;
        }
        

        for(uint64_t s = 0; s < size; s++){
            uint64_t some_cin;
            cin >> some_cin;
            v1[s] = some_cin;
        }
        for(uint64_t s = 0; s < size; s++){
            uint64_t some_cin;
            cin >> some_cin;
            v2[s] = some_cin;
        }
        uint64_t some = 0;
        uint64_t some_min = 0;
        for(uint64_t s = 0; s < size; s++){
            uint64_t some_cin;
            some = (some | max(max(v1[s], v2[s]), some_cin));
            some_min = (some_min | min(min(v1[s], v2[s]), some_cin));
            cin >> some_cin;
            v3[s] = some_cin;
        }
        if(some < target){
            cout << "No\n";
            continue;
        }
        if(some_min > target){
            cout << "No\n";
            continue;
        }
        some_rec(target, 0, 0);

        if(k == 1){
            cout << "Yes\n";
        } else{
            cout << "No\n";
        }

        k = 0;
    }


    return 0;
}

