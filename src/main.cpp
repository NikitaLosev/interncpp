#include <iostream>
#include <fstream>
#include "Graph.h"

int main() {
    std::ifstream fin("graph.txt");
    if (!fin.is_open()) {
        std::cerr << "Не удалось открыть graph.txt\n";
        return 1;
    }
    uint64_t n, m;
    fin >> n >> m;
    Graph g(n, m);
    for (uint64_t i = 0; i < m; i++) {
        uint64_t u, v;
        fin >> u >> v;
        g.addEdge(u, v);
    }
    uint64_t f;
    fin >> f;
    std::vector<int64_t> dist = g.bfs(f);
    for (int64_t d: dist) {
        std::cout << d << "\n";
    }
    fin.close();
    return 0;
}
