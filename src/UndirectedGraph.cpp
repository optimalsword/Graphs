//
// Created by 19012 on 10/11/2022.
//


#include "../include/UndirectedGraph.h"
#include <algorithm>


void UndirectedGraph::addNeighbor(int n, int g) {
    vertices[n]->neighbors.push_back(vertices[g]);
    vertices[g]->neighbors.push_back(vertices[n]);

    std::sort(vertices[n]->neighbors.begin(), vertices[n]->neighbors.end());
    std::sort(vertices[g]->neighbors.begin(), vertices[g]->neighbors.end());

    std::sort(vertices[n]->neighbors.begin(), vertices[n]->neighbors.end(), [] (Vertex* v1, Vertex* v2) {
        return v1->index < v2->index;
    });

    std::sort(vertices[g]->neighbors.begin(), vertices[g]->neighbors.end(), [] (Vertex* v1, Vertex* v2) {
        return v1->index < v2->index;
    });
}