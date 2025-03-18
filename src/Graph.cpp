//
// Created by Никита Лосев on 19.03.2025.
//

#include "Graph.h"

Graph::Graph(uint64_t n, uint64_t m) : n(n), m(m), adj(n) {
}

void Graph::addEdge(uint64_t u, uint64_t v) {
    adj[u].push_back(v);
    adj[v].push_back(u);
}

std::vector<int64_t> Graph::bfs(uint64_t f) {
    std::vector<int64_t> dist(n, -1);
    dist[f] = 0;
    std::queue<uint64_t> q;
    q.push(f);
    while (!q.empty()) {
        uint64_t cur = q.front();
        q.pop();
        for (uint64_t neighbor: adj[cur]) {
            if (dist[neighbor] == -1) {
                dist[neighbor] = dist[cur] + 1;
                q.push(neighbor);
            }
        }
    }
    return dist;
}