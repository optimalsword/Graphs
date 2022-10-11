//
// Created by 19012 on 10/11/2022.
//


#include "../include/UndirectedGraph.h"


void UndirectedGraph::addNeighbor(int n, int g) {
    vertices[n]->neighbors.push_back(vertices[g]);
    vertices[g]->neighbors.push_back(vertices[n]);
}