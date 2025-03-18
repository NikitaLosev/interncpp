//
// Created by Никита Лосев on 19.03.2025.
//

#ifndef INTERNCPP_GRAPH_H
#define INTERNCPP_GRAPH_H

#include "Graph.h"
#include <cstdint>
#include <vector>
#include <queue>

class Graph {
private:
    uint64_t n;
    uint64_t m;
    std::vector<std::vector<uint64_t>> adj;
public:
    Graph(uint64_t n, uint64_t m);

    void addEdge(uint64_t u, uint64_t v);

    std::vector<int64_t> bfs(uint64_t f);
};


#endif //INTERNCPP_GRAPH_H
