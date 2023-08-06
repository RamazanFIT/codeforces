#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    ll size;cin>>size;

    while(size--){
        ll x, y, time;
        cin >> x >> y >> time;
        ll ans = x;
        ll our = 0;
        ll wrt = 0;
        for(ll i = 0 ; i < x; i++){
            ll cnt = 0;
            vector<ll> massive(y);
            for(ll j = 0; j < y; j++){
                ll k;
                cin >> k;
                cnt += cnt + k;
                massive[j] = k;
            }
            ll c = 0;
            ll minus = 0;
            ll poll = 0;
            sort(massive.begin(), massive.end());
            for(ll j = 0; j < massive.size(); j++){
                if(massive[j] + c <= time){
                    c += massive[j];
                    minus += c;
                    poll++;
                } else break;
            }
            // ll c = 0;
            // while(cnt > time){
            //     cnt -= massive[c] * (y - c + 1);
            //     c++;
            // }
            if(i == 0){
                our = poll;
                wrt = minus;
            }   else{
                if(our > poll){
                    ans--;
                } else if(our == poll) {
                    if(wrt <= minus) ans--;
                }
            }
            // cout << poll << " " << minus << "\n";

            // cout << our << "  " << wrt << "\n";
        }
        cout << ans << "\n";
    }
    


}

