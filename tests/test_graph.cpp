//
// Created by Никита Лосев on 19.03.2025.
//
#include <gtest/gtest.h>
#include "../src/graph.h"

TEST(GraphTest, FromTask) {
    Graph g(5, 0);
    g.AddEdge(0, 1);
    g.AddEdge(0, 4);
    g.AddEdge(1, 2);
    g.AddEdge(1, 3);
    std::vector<int64_t> dist = g.BFS(4);
    EXPECT_EQ(dist[0], 1);
    EXPECT_EQ(dist[1], 2);
    EXPECT_EQ(dist[2], 3);
    EXPECT_EQ(dist[3], 3);
    EXPECT_EQ(dist[4], 0);
}