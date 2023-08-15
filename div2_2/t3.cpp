#include <bits/stdc++.h>
using namespace std;

#define ENDL "\n"
#define MAX_INT numeric_limits<int>::max()
#define ff first 
#define ss second  
#define all(x) (x).begin(), (x).end()
#define goodluck ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);

using ll = long long;

bool flag = true;

void dfs(vector<bool> &used, set<int> &availableVertices, vector<set<int>> &graph, int vertex) {
    used[vertex] = true;
    if (availableVertices.find(vertex) != availableVertices.end()) {
        availableVertices.erase(vertex);
    } else {
        flag = false;
        return;
    }

    for (auto neighbor : graph[vertex]) {
        if (!used[neighbor]) {
            dfs(used, availableVertices, graph, neighbor);
        }
    }
    return;
}

bool isPossible(vector<set<int>> &graph, int k, vector<bool> &used, set<int> &verticesToCheck) {
    for (int i = 0; i < k; i++) {
        if (used[verticesToCheck[i]]) continue;
        set<int> copy = verticesToCheck;
        dfs(used, copy, graph, verticesToCheck[i]);
        if (flag) {
            verticesToCheck = copy;
            flag = true;
        } else {
            verticesToCheck.insert(MAX_INT);
            return false;
        }
    }
    return true;
}

void solve() {
    int v, m, k;
    cin >> v >> m >> k;

    vector<set<int>> graph(v + 1);
    set<int> vertices;
    vector<int> verticesToCheck(k);

    for (int i = 0; i < k; i++) {
        int a;
        cin >> a;
        vertices.insert(a);
        verticesToCheck[i] = a;
    }

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        graph[a].insert(b);
        graph[b].insert(a);
    }

    set<int> availableVertices = vertices;
    vector<bool> used(v + 1, false);

    bool possible = isPossible(graph, k, used, availableVertices);

    if (availableVertices.empty()) {
        cout << "YES" << ENDL;
    } else {
        cout << "NO" << ENDL;
    }
    flag = true;
}

int main() {
    goodluck
    int n;
    cin >> n;
    while (n--) {
        solve();
    }
    return 0;
}
