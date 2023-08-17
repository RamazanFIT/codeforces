#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define endl "\n"
#define ff first 
#define ss second  
#define all(x) (x).begin(), (x).end()
#define goodluck ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<long long, long long> pll;
typedef vector<vector<int>> vvi;
typedef vector<vector<long long>> vll;
typedef vector<pair<int, int>> vpii;
typedef map<int, int> mpii;

/*
    extremal tests (1 - 1e9)
    MORE TESTS!!!
    forget about rating, solve more problems!!!
*/


int main()
{
    goodluck
    /*freopen("input.txt", 'r', stdin);
    freopen("output.txt", 'w', stdout);*/
    freopen("std.in", "r", stdin);
    freopen("sdt2.out", "w", stdout);
    int t; cin>>t;
    while(t--)
    {
        string s; cin>>s; int n = s.length();
        if(s == "()")   cout<<"NO";
        else cout << "YES";
        cout<<endl;
    }
    return 0;
}