//
// Created by Никита Лосев on 19.03.2025.
//

#ifndef INTERNCPP_GRAPH_H
#define INTERNCPP_GRAPH_H

#include <cstdint>
#include <queue>
#include <vector>

class Graph {
private:
    uint64_t n_;
    uint64_t m_;
    std::vector<std::vector<uint64_t>> adj_;

public:
    Graph(uint64_t n, uint64_t m);

    void AddEdge(uint64_t u, uint64_t v);

    std::vector<int64_t> BFS(uint64_t f);
};

#endif  // INTERNCPP_GRAPH_H
