#include <fstream>
#include <iostream>

#include "graph.h"

int main() {
    std::ifstream fin("../tests/graph.txt");
    if (!fin.is_open()) {
        std::cerr << "Не удалось открыть graph.txt\n";
        return 1;
    }
    uint64_t n = 0, m = 0;
    fin >> n >> m;
    Graph g(n, m);
    for (uint64_t i = 0; i < m; i++) {
        uint64_t u = 0, v = 0;
        fin >> u >> v;
        g.AddEdge(u, v);
    }
    uint64_t f = 0;
    fin >> f;
    std::vector<int64_t> dist = g.BFS(f);
    for (int64_t d: dist) {
        std::cout << d << "\n";
    }
    fin.close();
    return 0;
}