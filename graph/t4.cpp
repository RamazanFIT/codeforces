#include <iostream>
#include <queue>

int main() {
    std::priority_queue<int> pq;

    pq.push(10);
    pq.push(5);
    pq.push(20);
    pq.push(15);
    pq.push(-111);
    while (!pq.empty()) {
        std::cout << pq.top() << " "; // Извлекаем элемент с наивысшим приоритетом
        pq.pop();
    }
    
    return 0;
}
