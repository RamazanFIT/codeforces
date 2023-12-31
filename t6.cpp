#include <bits/stdc++.h>

using i64 = long long;

void solve() {
    std::string s;
    std::cin >> s;
    
    int n = s.size();
    
    if (s == "()") {
        std::cout << "NO\n";
        return;
    }
    
    std::cout << "YES\n";
    bool alt = true;
    for (int i = 1; i < n; i++) {
        if (s[i] == s[i - 1]) {
            alt = false;
        }
    }
    if (alt) {
        std::cout << std::string(n, '(') + std::string(n, ')') << "\n";
    } else {
        for (int i = 1; i <= n; i++) {
            std::cout << "()";
        }
        std::cout << "\n";
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    freopen("std.in", "r", stdin);
    freopen("sdt1.out", "w", stdout);
    int t;
    std::cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}
