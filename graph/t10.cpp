#include <iostream>
#include <vector>
#include <set>
#include <limits>

using namespace std;

// Структура для представления ребра графа
struct Edge {
    int target;
    int weight;
    Edge(int tgt, int w) : target(tgt), weight(w) {}
};

// Функция для нахождения кратчайшего пути с помощью алгоритма Дейкстры
vector<int> dijkstra(const vector<vector<Edge>>& graph, int start) {
    int n = graph.size(); // Количество вершин в графе
    vector<int> dist(n, numeric_limits<int>::max()); // Инициализируем расстояние до всех вершин как "бесконечность"
    dist[start] = 0; // Расстояние от начальной вершины до себя равно 0

    // Создаем set для хранения пар (расстояние, вершина) отсортированных по расстоянию
    set<pair<int, int>> pq;
    pq.insert(make_pair(0, start)); // Добавляем начальную вершину в set

    while (!pq.empty()) {
        int current_vertex = pq.begin()->second;
        int current_distance = pq.begin()->first;
        pq.erase(pq.begin());

        // Пропускаем вершину, если у нас уже есть более короткий путь до неё
        if (current_distance > dist[current_vertex]) {
            continue;
        }

        // Обновляем расстояние до всех соседей текущей вершины
        for (const Edge& edge : graph[current_vertex]) {
            int neighbor = edge.target;
            int new_distance = dist[current_vertex] + edge.weight;

            if (new_distance < dist[neighbor]) {
                pq.erase(make_pair(dist[neighbor], neighbor)); // Удаляем старую вершину из set
                dist[neighbor] = new_distance;
                pq.insert(make_pair(new_distance, neighbor)); // Вставляем новую вершину с обновленным расстоянием
            }
        }
    }

    return dist;
}

int main() {
    int n, m; // n - количество вершин, m - количество ребер
    int start; // начальная вершина, от которой ищется кратчайший путь

    cin >> n >> m;
    vector<vector<Edge>> graph(n);

    for (int i = 0; i < m; ++i) {
        int u, v, w;
        cin >> u >> v >> w;
        graph[u].emplace_back(v, w);
    }

    cin >> start;

    vector<int> shortest_distances = dijkstra(graph, start);

    // Выводим кратчайшие расстояния от начальной вершины до всех вершин
    cout << "Shortest distances from vertex " << start << ":\n";
    for (int i = 0; i < n; ++i) {
        cout << "Vertex " << i << ": " << shortest_distances[i] << endl;
    }

    return 0;
}
