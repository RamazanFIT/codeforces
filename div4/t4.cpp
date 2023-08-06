#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 
    // initialize container
    map<int, int> mp1, mp2;
    mp1.insert({ 1, 2 });
 
    // max size of Non-empty map
    cout << "The max size of mp1 is " << mp1.max_size();
 
    // max size of Empty-map
    cout << "\nThe max size of mp2 is " << mp2.max_size();
    return 0;
}